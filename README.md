# Lonchera-con-arduino
```typescript
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
```
<img align="left" src='https://user-images.githubusercontent.com/96712493/175050977-0c2d0c25-6e73-48df-92de-0ca84791679b.png' alt='github' height='200px' />
<img align="left" src='https://user-images.githubusercontent.com/96712493/175056466-fe1b34b5-646a-4eda-a25c-b65e8bc3a426.png' alt='github' height='200px' />
<img align="left" src='https://user-images.githubusercontent.com/96712493/175056651-5957f4a3-9d76-4b42-8eaf-d3e626c0b788.png' alt='github' height='200px' />
<img align="right" src='https://user-images.githubusercontent.com/96712493/175056783-ba8ff22b-683d-4c6d-bed4-1609d281439f.png' alt='github' height='200px' />


## Badges

Add badges from somewhere like: [shields.io](https://shields.io/)

[![MIT License](https://img.shields.io/apm/l/atomic-design-ui.svg?)](https://github.com/tterb/atomic-design-ui/blob/master/LICENSEs)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)

## Screenshots

![App Screenshot](https://www.pinterest.com.mx/likesupergamer/_created/)




### UWU




