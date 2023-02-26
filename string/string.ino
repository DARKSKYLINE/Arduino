String str1 = "hello" ;
String neme = "Suparoek";
int age = 15;
float gpa = 3.14;



void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println("NAME : " + neme);
  Serial.println("AGE : " + String(age));
  Serial.println("gpa : " + String(gpa));
  delay(500);
  

}
