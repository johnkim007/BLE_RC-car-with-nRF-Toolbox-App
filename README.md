# BLE_RC-car-with-nRF-Toolbox-App
BLE(Bluetooth Low Enery) RC Car with Arduino/ Genuino 101 using nRF Toolbox App


Arduino/ Genuino 101 BLE
https://www.arduino.cc/en/Reference/CurieBLE

CurieBLE library
With the Arduino/Genuino 101, using this library, 
it is possible to use BLE features to communicate and interact with other devices like smartphones and tablet

A quick introduction to BLE
Bluetooth 4.0 includes both traditional Bluetooth, now labeled "Bluetooth Classic", 
and the new Bluetooth Low Energy (Bluetooth LE, or BLE). 
BLE is optimized for low power use at low data rates, and was designed to operate from simple lithium coin cell batteries.
Unlike standard bluetooth communication basically based on an asynchronous serial connection (UART) a Bluetooth LE radio acts like a community bulletin board. 
The computers that connect to it are like community members that read the bulletin board. 
Each radio acts as either the bulletin board or the reader. 
If your radio is a bulletin board (called a peripheral device in Bluetooth LE parlance) it posts data for all radios in the community to read. 
If your radio is a reader (called a central device in Blueooth LE terms) it reads from any of the bulletin boards (peripheral devices) that have information about which it cares. 
You can also think of peripheral devices as the servers in a client-server transaction, because they contain the information that reader radios ask for. 
Similarly, central devices are the clients of the Bluetooth LE world because they read information available from the peripherals.
Think of a Bluetooth LE peripheral device as a bulletin board and central devices as viewers of the board. Central devices view the services, get the data, then move on. Each transaction is quick (a few milliseconds), so multiple central devices can get data from one peripheral.
The information presented by a peripheral is structured as services, each of which is subdivided into characteristics. You can think of services as the notices on a bulletin board, and characteristics as the individual paragraphs of those notices. If you're a peripheral device, you just update each service characteristic when it needs updating and don't worry about whether the central devices read them or not. If you're a central device, you connect to the peripheral then read the boxes you want. If a given characteristic is readable and writable, then the peripheral and central can both change it.


UART: Universal asynchronous receiver/transmitter
https://en.wikipedia.org/wiki/Universal_asynchronous_receiver/transmitter


nRF Toolbox App
https://www.nordicsemi.com/eng/Products/Nordic-mobile-Apps/nRF-Toolbox-App 

The nRF Toolbox is a container app that stores your Nordic Semiconductor apps for Bluetooth® low energy in one location.
The nRF Toolbox works with a wide range of the most popular Bluetooth low energy accessories.
It contains applications demonstrating the following profiles: 
Cycling Speed and Cadence, Running Speed and Cadence, Heart Rate Monitor, Blood Pressure Monitor, 
Health Thermometer Monitor, Glucose Monitor, Proximity Monitor and Nordic UART.
The Device Firmware Update (DFU) app, which is also included, allows you to upload the application image Over-the-air (OTA). 
It is compatible with Nordic Semiconductor nRF5 Series devices that have the SoftDevice and bootloader enabled. 
The Android version supports Android Wear devices.

ASCII Table and Description
http://www.asciitable.com/

ASCII stands for American Standard Code for Information Interchange. 
Computers can only understand numbers, 
so an ASCII code is the numerical representation of a character such as 'a' or '@' or an action of some sort. 
ASCII was developed a long time ago and now the non-printing characters are rarely used for their original purpose. 
Below is the ASCII character table and this includes descriptions of the first 32 non-printing characters. 
ASCII was actually designed for use with teletypes and so the descriptions are somewhat obscure. 
If someone says they want your CV however in ASCII format, 
all this means is they want 'plain' text with no formatting such as tabs, bold or underscoring
- the raw format that any computer can understand. 
This is usually so they can easily import the file into their own applications without issues. 
Notepad.exe creates ASCII text, or in MS Word you can save a file as 'text only'
