struct LED {
  String name;
  int iot = 12;
  int ntp = 15;
  int wifi = 2;
  int bt = 17;

};

struct LED led1;

int LEDS[4] = {led1.iot, led1.ntp, led1.wifi, led1.bt};
int x = 0;

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
  for (x = 0; x < 3; x++) {
    digitalWrite(LEDS[x], LOW);
    delay(50);
    digitalWrite(LEDS[x], HIGH);
    delay(50);
    Serial.println(x);
  }
  for (x = 3; x > 0; x--) {
    digitalWrite(LEDS[x], LOW);
    delay(50);
    digitalWrite(LEDS[x], HIGH);
    delay(50);
    Serial.println(x);
  }

}
