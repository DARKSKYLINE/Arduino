struct LED {
  String name;
  int iot = 12;
  int ntp = 15;
  int wifi = 2;
  int bt = 17;

};

struct LED led1;
int iot = 12;
int ntp = 15;
int wifi = 2;
int bt = 17;

void setup() {
  Serial.begin(9600);
  pinMode(led1.iot, OUTPUT);
  pinMode(led1. ntp, OUTPUT);
  pinMode(led1.wifi, OUTPUT);
  pinMode(led1.bt, OUTPUT);
  led1.name = "za warudo!";
}

void loop () {
  Serial.println("star platinum " + led1.name);
  digitalWrite(iot, LOW);
  delay(50);
  digitalWrite(iot, HIGH);
  delay(50);

  digitalWrite(ntp, LOW);
  delay(50);
  digitalWrite(ntp, HIGH);
  delay(50);

  digitalWrite(wifi, LOW);
  delay(50);
  digitalWrite(wifi, HIGH);
  delay(50);

  digitalWrite(bt, LOW);
  delay(50);
  digitalWrite(bt, HIGH);
  delay(50);

}
