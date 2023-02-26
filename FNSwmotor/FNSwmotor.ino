int iot = 12;
int ntp = 15;
int bt = 17;
int wifi = 2;
int sw2 = 14;
int sw1 = 6;

void setup(){
  pinMode(iot,OUTPUT);
  pinMode(ntp,OUTPUT);
  pinMode(wifi,OUTPUT);
  pinMode(bt,OUTPUT);
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);
} 

void forward(){ //0101
   digitalWrite(bt,LOW);
   digitalWrite(wifi,HIGH);
   digitalWrite(ntp,LOW);
   digitalWrite(iot,HIGH);
}

void backward(){ //1010
   digitalWrite(bt,HIGH);
   digitalWrite(wifi,LOW);
   digitalWrite(ntp,HIGH);
   digitalWrite(iot,LOW);
}

void right(){ //1001
   digitalWrite(bt,HIGH);
   digitalWrite(wifi,LOW);
   digitalWrite(ntp,LOW);
   digitalWrite(iot,HIGH);
}

void left(){ //0110
   digitalWrite(bt,LOW);
   digitalWrite(wifi,HIGH);
   digitalWrite(ntp,HIGH);
   digitalWrite(iot,LOW);
}

void stopp(){ //1111
   digitalWrite(bt,HIGH);
   digitalWrite(wifi,HIGH);
   digitalWrite(ntp,HIGH);
   digitalWrite(iot,HIGH);
}

void loop(){
 
  if(digitalRead(sw1)==LOW)
  {
    forward();
  }else{
    stopp();
  } 

  if(digitalRead(sw2) ==LOW)
  {
    backward();
  }else{
    stopp();
  }
}
   
