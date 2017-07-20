/* ===============================================================
      Project: 4 Channel 5V Relay Module
       Author: Scott C
      Created: 7th Sept 2014
  Arduino IDE: 1.0.5
      Website: http://arduinobasics.blogspot.com.au
  Description: Explore the difference between NC and NO terminals.
================================================================== */

 /* 
  Connect 5V on Arduino to VCC on Relay Module
  Connect GND on Arduino to GND on Relay Module 
  Connect GND on Arduino to the Common Terminal (middle terminal) on Relay Module. */
 
 #define CH1 4   // Connect Digital Pin 4 on Arduino to CH1 on Relay Module
 #define CH2 5   // Connect Digital Pin 5 on Arduino to CH3 on Relay Module
 #define CH3 6   // Connect Digital Pin 6 on Arduino to CH3 on Relay Module
 #define CH4 7   // Connect Digital Pin 7 on Arduino to CH3 on Relay Module
 
 void setup(){
   //Setup all the Arduino Pins
   pinMode(CH1, OUTPUT);
   pinMode(CH2, OUTPUT);
   pinMode(CH3, OUTPUT);
   pinMode(CH4, OUTPUT);
   
   //Turn OFF any power to the Relay channels
   digitalWrite(CH1,LOW);
   digitalWrite(CH2,LOW);
   digitalWrite(CH3,LOW);
   digitalWrite(CH4,LOW);
   delay(5000); //Wait 5 seconds before starting sequence
 }
 
 void loop(){
   digitalWrite(CH1, HIGH); 
   delay(1000);
   digitalWrite(CH1, LOW);  
   delay(1000);
   digitalWrite(CH2, HIGH);
   delay(1000);
   digitalWrite(CH2,LOW);  
   delay(1000);
   digitalWrite(CH3, HIGH); 
   delay(1000);
   digitalWrite(CH3,LOW);   
   delay(1000);
   digitalWrite(CH4, HIGH);  
   delay(1000);
   digitalWrite(CH4,LOW);    
   delay(1000);
 }
