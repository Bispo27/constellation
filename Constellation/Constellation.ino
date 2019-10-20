#include <Ultrasonic.h>

#define trigger 10
#define echo1 11
#define REF 11 // Distancia entre o sensor e o globo, para conseguirmos a altitude em determinado local

Ultrasonic ultrasonic(trigger, echo1);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  //float Temp = 2 + analogRead(A0) * 150 / 1023;
  float Dist;
  long microsec;
  microsec = ultrasonic.timing();
  Dist = ultrasonic.convert(microsec, Ultrasonic::CM);
  
  
  //Serial.print("Dist: "); 
  if(Dist < 200)
  Serial.println(Dist - REF);
  //Serial.print("Temperatura: "); Serial.println(Temp);
  //Serial.println("");
  
  delay(10);
}
