int LED[] = {2, 12, 15, 17};

void setup() {
  pinMode(LED[0], OUTPUT)
  pinMode(LED[1], OUTPUT)
  pinMode(LED[2], OUTPUT)
  pinMode(LED[3], OUTPUT)
}

void loop () {
  for (int LED = 0; LED <= 3; LED++); {
    digitalWrite(LED[0], LOW);
    delay(50);
    digitalWrite(LED[0], HIGH);
    delay(50);

    digitalWrite(LED[1], LOW);
    delay(50);
    digitalWrite(LED[1], HIGH);
    delay(50);

    digitalWrite(LED[2], LOW);
    delay(50);
    digitalWrite(LED[2], HIGH);
    delay(50);

    digitalWrite(LED[3], LOW);
    delay(50);
    digitalWrite(LED[3], HIGH);
    delay(50);
  }
