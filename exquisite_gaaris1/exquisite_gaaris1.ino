// C++ code
//
#include <Servo.h>

#define LED 8
#define TTP223B 7

Servo servo_2;

void setup(){
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(TTP223B, INPUT);
  servo_2.attach(2, 500, 2500);


  
  }



void loop()
{
  if (digitalRead(TTP223B)== HIGH){
    digitalWrite(LED,HIGH);
   Serial.println("1");
   tone(4, 523, 1000); // play tone 60 (C5 = 523 Hz)
   servo_2.write(100);
    
    }else{
      digitalWrite(LED, LOW);
      servo_2.write(0);
      Serial.println("0");
      }
  delay(50);
  }
