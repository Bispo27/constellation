#include <Ultrasonic.h>

#define trigger 4
#define echo1 5 
#define echo2 6
#define echo3 7
#define echo4 8
#define echo5 9
#define echo6 10

Ultrasonic ultrasonic1(trigger, echo1);
Ultrasonic ultrasonic2(trigger, echo2);
Ultrasonic ultrasonic3(trigger, echo3);
Ultrasonic ultrasonic4(trigger, echo4);
Ultrasonic ultrasonic5(trigger, echo5);
Ultrasonic ultrasonic6(trigger, echo6);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  float Temp = 2 + analogRead(A0) * 150 / 1023;
  float Dist1, Dist2, Dist3, Dist4, Dist5, Dist6;
  long microsec;
  microsec = ultrasonic1.timing();
  Dist1 = ultrasonic1.convert(microsec, Ultrasonic::CM);
  
  microsec = ultrasonic2.timing();
  Dist2 = ultrasonic2 .convert(microsec, Ultrasonic::CM);
  
  microsec = ultrasonic3.timing();
  Dist3 = ultrasonic3.convert(microsec, Ultrasonic::CM);
  
  microsec = ultrasonic4.timing();
  Dist4 = ultrasonic4.convert(microsec, Ultrasonic::CM);
  
  microsec = ultrasonic5.timing();
  Dist5 = ultrasonic5.convert(microsec, Ultrasonic::CM);
  
  microsec = ultrasonic6.timing();
  Dist6 = ultrasonic6.convert(microsec, Ultrasonic::CM);

  Serial.print("Dist1: "); Serial.println(Dist1);
  Serial.print("Dist2: "); Serial.println(Dist2);
  Serial.print("Dist3: "); Serial.println(Dist3);
  Serial.print("Dist4: "); Serial.println(Dist4);
  Serial.print("Dist5: "); Serial.println(Dist5);
  Serial.print("Dist6: "); Serial.println(Dist6);
  Serial.print("Temperatura: "); Serial.println(Temp);
  Serial.println("");
  
  delay(10);
}
