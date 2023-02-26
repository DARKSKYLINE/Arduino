#include <analogWrite.h>
int iot = 12;

void setup(){
     pinMode(iot,OUTPUT);
}


void loop(){
  for (int x = 255; x > 0; x--) {
    analogWrite(iot , x);
    delay(1);    
    Serial.println(x);
  }
 }
