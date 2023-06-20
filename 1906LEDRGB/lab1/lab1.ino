int D2 = 2 ;
int D3 = 3 ;
int D4 = 4 ;
int D5 = 5 ;
int R = 11 ;
int G = 9 ;
int B = 10 ;


void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {

  digitalWrite(2, HIGH);
  delay(10);
  digitalWrite(3, HIGH);
  delay(10);
  digitalWrite(4, HIGH);
  delay(10);
  digitalWrite(5, HIGH);
  delay(10);
  digitalWrite(2, LOW);
  delay(10);
  digitalWrite(3, LOW);
  delay(10);
  digitalWrite(4, LOW);
  delay(10);
  digitalWrite(5, LOW);
  delay(20);
  analogWrite(11,0);
  analogWrite(10,255);
  analogWrite(9,0);
  delay(300);
  analogWrite(11,255);
  analogWrite(10,0);
  analogWrite(9,200);
  delay(300);
  analogWrite(11,255);
  analogWrite(10,255);
  analogWrite(9,0);
  delay(300);
  analogWrite(11,255);
  analogWrite(10,0);
  analogWrite(9,0);
  delay(300);
}
