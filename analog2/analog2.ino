#include <analogWrite.h>
int iot = 12;
int LDR = 36;
int light = 0;

void setup() {
  Serial.begin(9600);
  pinMode(iot, OUTPUT);
  pinMode(LDR, INPUT);
}


void loop() {
  for (int x = light; x > 0; x--) {
    analogWrite(iot , light);
    delay(1);

  }
  light = analogRead(LDR);
  Serial.println(light);

  
}
