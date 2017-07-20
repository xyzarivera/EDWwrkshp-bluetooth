#include <SoftwareSerial.h>
String data;                          //Variable for storing received data
SoftwareSerial mySerial(3, 2);

String dat;
int a,b,c,d;

void setup() {
  Serial.begin(9600);
  // BT serial connection setup
  mySerial.begin(9600); 
}

void loop() {

  if(mySerial.available() > 0)             // receives data from app
   {
    int data = mySerial.read();           //Read the incoming data & store into data
    Serial.print("ASCII int: ");
    Serial.print(data);                 //Print Value in integer(ASCII data)
    Serial.print("\n");
    Serial.print("ASCII char: ");
    Serial.write(data);                 //Print Value in char (ASCII data)
    Serial.print("\n");

     if (data == 49 && a==0)
    {
      a = 1; 
      Serial.print ("a:");
      Serial.println (a);
     }
    else if (data == 49 && a==1 ) 
    {
      a = 0;
      Serial.print ("a:");
      Serial.println (a);
     }
   }
  delay(1000);
}
