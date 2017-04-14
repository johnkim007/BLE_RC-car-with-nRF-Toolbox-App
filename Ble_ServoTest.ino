#include <Servo.h>
Servo myservo;

#include <CurieBLE.h>
BLEPeripheral blePeripheral;
BLEService UARTService ("6E400001-B5A3-F393-E0A9-E50E24DCCA9E");
BLEUnsignedCharCharacteristic RXCharacteristic ("6E400002-B5A3-F393-E0A9-E50E24DCCA9E", BLEWrite);
BLEUnsignedCharCharacteristic TXCharacteristic ("6E400003-B5A3-F393-E0A9-E50E24DCCA9E", BLERead);

void setup () {
  blePeripheral.setLocalName ("RC_car");
  blePeripheral.setDeviceName ("RC_car");
  blePeripheral.setAdvertisedServiceUuid (UARTService.uuid());
  blePeripheral.addAttribute (UARTService);
  blePeripheral.addAttribute (RXCharacteristic);
  blePeripheral.addAttribute (TXCharacteristic);
  RXCharacteristic.setValue (0);
  blePeripheral.begin ();

  myservo.attach(5); //서보모터 연결 핀 설정
  myservo.write(0); // 초기 서보모터 값 설정
}

void loop () {
  BLECentral central = blePeripheral.central ();
  if (central) { while (central.connected ()) {
     if (RXCharacteristic.written()) { ParseRXValue (RXCharacteristic.value ());}
    RXCharacteristic.setValue (0); } }
}

void ParseRXValue (int RXValue){
     if (RXValue == 111) { Open(); } 
     // 스마트폰 어플 nRF Toolbox에서 문자o 값을 보내면 아스키테이블값 변환 숫자(Dec) 111를 보낸다.
     // http://www.asciitable.com/
     if (RXValue == 99) { Close(); } 
     // 스마트폰 어플 nRF Toolbox에서 문자c 값을 보내면 아스키테이블값 변환 숫자(Dec) 99를 보낸다.
}

void Open(){
  myservo.write(90);
}

void Close(){
  myservo.write(0);
}
