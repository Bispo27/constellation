#define PWM 9
int cont = 0;
void setup() {
  pinMode(PWM, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PWM, HIGH);// off
  delay(85);
  digitalWrite(PWM, LOW);//on
  delay(15);
  
}
