#include <Servo.h>
int role=10;
int buzzer=8;
int pir=5;
int sespin=A0;
Servo motor;

void setup() {
  motor.attach(6);
  pinMode(role,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(pir,INPUT);
  pinMode(sespin,INPUT);
  Serial.begin(9600);

}

void loop() {
  int pirdeger=digitalRead(pir);
  int sesdeger=analogRead(sespin);

  if(pirdeger==HIGH || sesdeger<30){
    digitalWrite(role,HIGH);
    motor.write(120);
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
  }
  else{
    digitalWrite(role,LOW);
    motor.write(0);
    digitalWrite(buzzer,LOW);
  }
  

}
