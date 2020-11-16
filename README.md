# Magic Band Reader controller for Arduino 

![magic band reader controller for arduino](images/MBR.png)

The purpose of this project is to automate control of other devices utilizing a Disney Magic Band. This project was created with the purpose of enabling fans like you to be able to bring some disney magic into your home thru a simple to use magic band reader. We encourage you to learn from this as well as provide feedback for us to improve upon it.

## Follow Me

[![alt text][1.1]][1]  [![alt text][2.1]][2]  [![alt text][3.1]][3]

[1.1]: images/instagram.png (Instagram - dominick_civitano)
[2.1]: images/github.png (Github - dcivitano)
[3.1]: images/tiktok.png (Tiktok - domthebuilder)
[1]: https://www.instagram.com/dominick_civitano/
[2]: https://www.github.com/dcivitano/
[3]: https://www.tiktok.com/@domthebuilder

### Actual Use:

## Getting Started

* **This project was built using an Arduino Mega. Should you attempt to change this to an Uno or otherwise you do so at YOUR OWN RISK.**

It will be helpful but not necessary if you have a basic level of programming experience as well as a little experience programming Arduino micro controllers. This project was created using the Aurduino IDE. Clone or download this repository at your own risk.

You can download the 3D printable magic band casing on Thingiverse:

[Thingiverse Disney World MagicBand reader v2](https://www.thingiverse.com/thing:4460759)

### Prerequisites
* Some experience with [Arduino](https://www.arduino.cc/)

* Be sure to have the Arduino board installed in your environment.
* Install the [Adafruit_Neopixel](https://github.com/adafruit/Adafruit_NeoPixel) library
* Install the [SoftwareSerial](https://github.com/PaulStoffregen/SoftwareSerial) library
* Install the [DFRobotDFPlayerMini](https://github.com/DFRobot/DFPlayer-Mini-mp3) library
* An Arduino
* A 1K resistor
* A 5V arduino relay
* A Neopixel LED strip
* A RFID reader
* A DFPlayer Mini
* An AC extension cord (preferably a single outlet)
* A speaker

(See BOM below for details)

### Installing

1. In the Arduino IDE be sure to set the appropriate board (Arduino Nano) and ports to match your environment.
2. Complile and load onto your Arduino following the Arduino IDE [instructions(https://www.arduino.cc/en/Guide)].

Successful installation will result in the RFID reader being able to read a magic band which will be shown thru the arduino Serial Monitor. Code edits will be required to allow for successful access to your specific magic band for control of the outlet and a response from the reader with lights and sounds.

## Breadboard Diagram

![breadboard_diagram](images/finishedcircuit.png)

## BOM

Most components can be found on [Amazon](https://www.amazon.com/) or [AliExpress](https://www.aliexpress.com/)
* Arduino (mega, uno, nano etc.)
* Mini MP3 Audio module ([DFPlayer-mini](https://www.amazon.com/gp/product/B07Y2YKYRS/ref=ppx_yo_dt_b_asin_image_o06_s00?ie=UTF8&psc=1)) 
* 5V relay standard arduino ([relay](https://www.amazon.com/gp/product/B07BVXT1ZK/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1))
* Jumper wires both male to male and male to female ([wires](https://www.amazon.com/gp/product/B07GD2BWPY/ref=ppx_yo_dt_b_asin_image_o00_s00?ie=UTF8&psc=1))
* LED strip (NeoPixel or [other brand](https://www.amazon.com/gp/product/B07C2W2ZQK/ref=ppx_yo_dt_b_asin_title_o09_s00?ie=UTF8&psc=1 ))
* 1 K ohm ([resistor](https://www.amazon.com/Projects-100EP5121K00-Ohm-Resistors-Pack/dp/B0185FIJ9A/ref=sr_1_3?dchild=1&keywords=1k+ohm+resistor&qid=1605366999&sr=8-3))
* [Speaker](https://www.amazon.com/Yootop-Internal-Magnet-Loudspeaker-Speaker/dp/B07FMR5JGX/ref=sr_1_4?crid=2K87N6KVKY9V2&dchild=1&keywords=speaker+arduino&qid=1605367054&sprefix=speaker+arduin%2Caps%2C143&sr=8-4 )
* RFID reader (Rc255-FROM [ALI EXPRESS](https://www.aliexpress.com/item/1005001543022507.html?spm=a2g0o.productlist.0.0.2228e5c2ludWkE&algo_pvid=4a07b899-7219-49a6-9ee4-7fc097820709&algo_expid=4a07b899-7219-49a6-9ee4-7fc097820709-12&btsid=0bb0623c16053672112166469e25d3&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_ ))
* [Extension cord](https://www.amazon.com/dp/B000Q68W2G/ref=twister_B08JSFTBZ1?_encoding=UTF8&psc=1)
* [Breadboard](https://www.amazon.com/Breadboards-Solderless-Breadboard-Distribution-Connecting/dp/B07DL13RZH/ref=sr_1_3?dchild=1&keywords=breadboard&qid=1605368580&sr=8-3)

## Built With

* [Arduino](https://www.arduino.cc/)

## Version

* Version 1.0 (Use at your own risk)

## Authors

* **Dominick Civitano**

## Liscence

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgements

* [dominick_civitano](https://www.instagram.com/dominick_civitano/)
