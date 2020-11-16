/*
 * INITIAL AUTHOR: Dominick Civitano
 *
 * See: https://github.com/miguelbalboa/rfid/tree/master/examples/rfid_write_personal_data
 *
 * Uses MIFARE RFID card using RFID-RC522 reader
 * Uses MFRC522 - Library
 * -----------------------------------------------------------------------------------------
 *             MFRC522      Arduino       Arduino   Arduino    Arduino          Arduino
 *             Reader/PCD   Uno/101       Mega      Nano v3    Leonardo/Micro   Pro Micro
 * Signal      Pin          Pin           Pin       Pin        Pin              Pin
 * -----------------------------------------------------------------------------------------
 * RST/Reset   RST          9             5         D9         RESET/ICSP-5     RST
 * SPI SS      SDA(SS)      10            53        D10        10               10
 * SPI MOSI    MOSI         11 / ICSP-4   51        D11        ICSP-4           16
 * SPI MISO    MISO         12 / ICSP-1   50        D12        ICSP-1           14
 * SPI SCK     SCK          13 / ICSP-3   52        D13        ICSP-3           15
*/
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

// Use pins 2 and 3 to communicate with DFPlayer Mini
static const uint8_t PIN_MP3_TX = 11; // Connects to module's RX
static const uint8_t PIN_MP3_RX = 10; // Connects to module's TX

SoftwareSerial softwareSerial(PIN_MP3_RX, PIN_MP3_TX);

// Create the Player object
DFRobotDFPlayerMini player;
#endif

#include <SPI.h>
#include <MFRC522.h>
#define PIN 6
#define NUMPIXELS      24
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define RST_PIN         5           // Configurable, see typical pin layout above
#define SS_PIN          53          // Configurable, see typical pin layout above

MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance

const int relay = 7; //relay control pin

//*****************************************************************************************//
void setup() {
  pinMode(relay,OUTPUT);
  Serial.begin(9600);                                           // Initialize serial communications with the PC
  softwareSerial.begin(9600);
  if (player.begin(softwareSerial)) {
    Serial.println("speaker on");

    // Set volume to maximum (0 to 30).
    player.volume(20);
    // Play the first MP3 file on the SD card
    
  }

  digitalWrite(relay, LOW);
  SPI.begin();  
  pixels.begin();
  pixels.show(); // Initialize all pixels to 'off'
// Init SPI bus
  mfrc522.PCD_Init();                                              // Init MFRC522 card
  Serial.println(F("Read personal data on a MIFARE PICC:"));    //shows in serial that it is ready to read
}

//*****************************************************************************************//
void disney(){
  
  pixels.setPixelColor(23, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(23, pixels.Color(0,0,0));
  pixels.setPixelColor(22, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(22, pixels.Color(0,0,0));
  pixels.setPixelColor(21, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(21, pixels.Color(0,0,0));
  pixels.setPixelColor(20, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(20, pixels.Color(0,0,0));
  pixels.setPixelColor(19, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(19, pixels.Color(0,0,0));
  pixels.setPixelColor(18, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(18, pixels.Color(0,0,0));
  pixels.setPixelColor(17, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(17, pixels.Color(0,0,0));
  pixels.setPixelColor(16, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(16, pixels.Color(0,0,0));
  pixels.setPixelColor(15, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(15, pixels.Color(0,0,0));
  pixels.setPixelColor(14, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(14, pixels.Color(0,0,0));
  pixels.setPixelColor(13, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(13, pixels.Color(0,0,0));
  pixels.setPixelColor(12, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(12, pixels.Color(0,0,0));
  pixels.setPixelColor(11, pixels.Color(0,25,0));
  pixels.show();
  delay(50); 
  pixels.setPixelColor(11, pixels.Color(0,0,0));
  pixels.setPixelColor(10, pixels.Color(0,25,0));
  pixels.show();
  delay(50); 
  pixels.setPixelColor(10, pixels.Color(0,0,0));
  pixels.setPixelColor(9, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(9, pixels.Color(0,0,0));
  pixels.setPixelColor(8, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(8, pixels.Color(0,0,0));
  pixels.setPixelColor(7, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(7, pixels.Color(0,0,0));
  pixels.setPixelColor(6, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(6, pixels.Color(0,0,0));
  pixels.setPixelColor(5, pixels.Color(0,25,0));
  pixels.show();
  delay(50);  
  pixels.setPixelColor(5, pixels.Color(0,0,0));
  pixels.setPixelColor(4, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(4, pixels.Color(0,0,0));
  pixels.setPixelColor(3, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(3, pixels.Color(0,0,0));
  pixels.setPixelColor(2, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(2, pixels.Color(0,0,0));
  pixels.setPixelColor(1, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(1, pixels.Color(0,0,0));
  pixels.setPixelColor(0, pixels.Color(0,25,0));
  pixels.show();
  delay(50);
  pixels.setPixelColor(0, pixels.Color(0,0,0));
  pixels.show();
  delay(50);
}

void disneyaccess()
{
//  player.play(1); 

 pixels.setPixelColor(0, pixels.Color(0,25,0));
 pixels.setPixelColor(1, pixels.Color(0,25,0));
 pixels.setPixelColor(2, pixels.Color(0,25,0));
 pixels.setPixelColor(3, pixels.Color(0,25,0));
 pixels.setPixelColor(4, pixels.Color(0,25,0));
 pixels.setPixelColor(5, pixels.Color(0,25,0));
 pixels.setPixelColor(6, pixels.Color(0,25,0));
 pixels.setPixelColor(7, pixels.Color(0,25,0));
 pixels.setPixelColor(8, pixels.Color(0,25,0));
 pixels.setPixelColor(9, pixels.Color(0,25,0));
 pixels.setPixelColor(10, pixels.Color(0,25,0));
 pixels.setPixelColor(11, pixels.Color(0,25,0));
 pixels.setPixelColor(12, pixels.Color(0,25,0));
 pixels.setPixelColor(13, pixels.Color(0,25,0));
 pixels.setPixelColor(14, pixels.Color(0,25,0));
 pixels.setPixelColor(15, pixels.Color(0,25,0));
 pixels.setPixelColor(16, pixels.Color(0,25,0));
 pixels.setPixelColor(17, pixels.Color(0,25,0));
 pixels.setPixelColor(18, pixels.Color(0,25,0));
 pixels.setPixelColor(19, pixels.Color(0,25,0));
 pixels.setPixelColor(20, pixels.Color(0,25,0));
 pixels.setPixelColor(21, pixels.Color(0,25,0));
 pixels.setPixelColor(22, pixels.Color(0,25,0));
 pixels.setPixelColor(23, pixels.Color(0,25,0));
 pixels.show();
 
 if(digitalRead(relay) == HIGH)
    {
   digitalWrite(relay,LOW);
   Serial.println("Relay off"); 
   }
   else
   {
   digitalWrite(relay,HIGH);
   Serial.println("Relay on"); 
   }


}

void disneyoff()
{
pixels.setPixelColor(0, pixels.Color(0,0,0));
 pixels.setPixelColor(1, pixels.Color(0,0,0));
 pixels.setPixelColor(2, pixels.Color(0,0,0));
 pixels.setPixelColor(3, pixels.Color(0,0,0));
 pixels.setPixelColor(4, pixels.Color(0,0,0));
 pixels.setPixelColor(5, pixels.Color(0,0,0));
 pixels.setPixelColor(6, pixels.Color(0,0,0));
 pixels.setPixelColor(7, pixels.Color(0,0,0));
 pixels.setPixelColor(8, pixels.Color(0,0,0));
 pixels.setPixelColor(9, pixels.Color(0,0,0));
 pixels.setPixelColor(10, pixels.Color(0,0,0));
 pixels.setPixelColor(11, pixels.Color(0,0,0));
 pixels.setPixelColor(12, pixels.Color(0,0,0));
 pixels.setPixelColor(13, pixels.Color(0,0,0));
 pixels.setPixelColor(14, pixels.Color(0,0,0));
 pixels.setPixelColor(15, pixels.Color(0,0,0));
 pixels.setPixelColor(16, pixels.Color(0,0,0));
 pixels.setPixelColor(17, pixels.Color(0,0,0));
 pixels.setPixelColor(18, pixels.Color(0,0,0));
 pixels.setPixelColor(19, pixels.Color(0,0,0));
 pixels.setPixelColor(20, pixels.Color(0,0,0));
 pixels.setPixelColor(21, pixels.Color(0,0,0));
 pixels.setPixelColor(22, pixels.Color(0,0,0));
 pixels.setPixelColor(23, pixels.Color(0,0,0));
 pixels.show();
}
void loop() {

  // Prepare key - all keys are set to FFFFFFFFFFFFh at chip delivery from the factory.
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) key.keyByte[i] = 0xFF;

  //some variables we need
  byte block;
  byte len;
  MFRC522::StatusCode status;

  //-------------------------------------------

  // Reset the loop if no new card present on the sensor/reader. This saves the entire process when idle.
  if ( ! mfrc522.PICC_IsNewCardPresent()) {
    return;
  }

  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) {
    return;
  }

  Serial.println(F("**Card Detected:**"));

  //-------------------------------------------
Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "04 91 28 8A D5 2C 80") //change here the UID of the card/cards that you want to give access
  {
    Serial.println("Authorized access");
    disney();
    disney();
    disney();
    disneyaccess();
    player.play(1);
    delay(2000);
    disneyoff();
    Serial.println();
    
    delay(2500);

  }
 
 else   {
    Serial.println(" Access denied");
 }
  mfrc522.PICC_DumpDetailsToSerial(&(mfrc522.uid)); //dump some details about the card

  //mfrc522.PICC_DumpToSerial(&(mfrc522.uid));      //uncomment this to see all blocks in hex

  //-------------------------------------------

  Serial.print(F("Name: "));

  byte buffer1[18];

  block = 4;
  len = 18;

  //------------------------------------------- GET FIRST NAME
  status = mfrc522.PCD_Authenticate(MFRC522::PICC_CMD_MF_AUTH_KEY_A, 4, &key, &(mfrc522.uid)); //line 834 of MFRC522.cpp file
  if (status != MFRC522::STATUS_OK) {
    Serial.print(F("Authentication failed: "));
    Serial.println(mfrc522.GetStatusCodeName(status));
    return;
  }

  status = mfrc522.MIFARE_Read(block, buffer1, &len);
  if (status != MFRC522::STATUS_OK) {
    Serial.print(F("Reading failed: "));
    Serial.println(mfrc522.GetStatusCodeName(status));
    return;
  }

  //PRINT FIRST NAME
  for (uint8_t i = 0; i < 16; i++)
  {
    if (buffer1[i] != 32)
    {
      Serial.write(buffer1[i]);
    }
  }
  Serial.print(" ");

  //---------------------------------------- GET LAST NAME

  byte buffer2[18];
  block = 1;

  status = mfrc522.PCD_Authenticate(MFRC522::PICC_CMD_MF_AUTH_KEY_A, 1, &key, &(mfrc522.uid)); //line 834
  if (status != MFRC522::STATUS_OK) {
    Serial.print(F("Authentication failed: "));
    Serial.println(mfrc522.GetStatusCodeName(status));
    return;
  }

  status = mfrc522.MIFARE_Read(block, buffer2, &len);
  if (status != MFRC522::STATUS_OK) {
    Serial.print(F("Reading failed: "));
    Serial.println(mfrc522.GetStatusCodeName(status));
    return;
  }

  //PRINT LAST NAME
  for (uint8_t i = 0; i < 16; i++) {
    Serial.write(buffer2[i] );
  }


  //----------------------------------------

  Serial.println(F("\n**End Reading**\n"));

  delay(1000); //change value if you want to read cards faster

  mfrc522.PICC_HaltA();
  mfrc522.PCD_StopCrypto1();
}
//*****************************************************************************************//
