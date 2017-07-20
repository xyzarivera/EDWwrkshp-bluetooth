#include <SoftwareSerial.h>
String data;                          //Variable for storing received data
SoftwareSerial mySerial(3, 2);

int Relay1 = 4;
int Relay2 = 5;
int Relay3 = 6;
int Relay4 = 7;
String dat;
int a,b,c,d;

void setup() {
  Serial.begin(9600);
  // BT serial connection setup
  mySerial.begin(9600); 

  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(Relay3, OUTPUT);
  pinMode(Relay4, OUTPUT);

  digitalWrite(Relay1, LOW); a = 0;
  digitalWrite(Relay2, LOW); b = 0;
  digitalWrite(Relay3, LOW); c = 0;
  digitalWrite(Relay4, LOW); d = 0;

  delay(2000);
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
      digitalWrite(Relay1, HIGH);
      Serial.print ("a:");
      Serial.println (a);
     }
    else if (data == 49 && a==1 ) 
    {
      a = 0;
      digitalWrite(Relay1, LOW); 
      Serial.print ("a:");
      Serial.println (a);
     }
     else if (data == 50 && b==0 ) 
    {
      b = 1;
      digitalWrite(Relay2, HIGH); 
      Serial.print ("b:");
      Serial.println (b);
     }
     else if (data == 50 && b==1 ) 
    {
      b = 0;
      digitalWrite(Relay2, LOW); 
      Serial.print ("b:");
      Serial.println (b);
     }
     else if (data == 51 && c==0 ) 
    {
      c = 1;
      digitalWrite(Relay3, HIGH); 
      Serial.print ("c:");
      Serial.println (c);
     }
     else if (data == 51 && c==1 ) 
    {
      c = 0;
      digitalWrite(Relay3, LOW); 
      Serial.print ("c:");
      Serial.println (c);
     }
     else if (data == 52 && d==0 ) 
    {
      d = 1;
      digitalWrite(Relay4, HIGH); 
      Serial.print ("d:");
      Serial.println (d);
     }
     else if (data == 52 && d==1 ) 
    {
      d = 0;
      digitalWrite(Relay4, LOW); 
      Serial.print ("d:");
      Serial.println (d);
    }
    
   }
  delay(1000);
}
