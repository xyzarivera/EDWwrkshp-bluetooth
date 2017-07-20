/*
 * original: bit.do/Avishkar
 * 
 * BT to Arduino
 * RX <--> TX
 * TX <--> RX
*/

#include <SoftwareSerial.h>
String data;                          //Variable for storing received data
SoftwareSerial mySerial(3, 2);

void setup()
{
    Serial.begin(9600);               //Sets the baud for serial data transmission 
    
    // BT serial connection setup
     mySerial.begin(9600);                              
}
void loop()
{ 
   if(mySerial.available() > 0)             // Send data only when you receive data:
   {
      int data = mySerial.read();           //Read the incoming data & store into data
    Serial.print("ASCII int: ");
    Serial.print(data);                 //Print Value in integer(ASCII data)
    Serial.print("\n");
    Serial.print("ASCII char: ");
    Serial.write(data);                 //Print Value in char (ASCII data)
    Serial.print("\n");
      //Serial.print("ok");
    }
}
