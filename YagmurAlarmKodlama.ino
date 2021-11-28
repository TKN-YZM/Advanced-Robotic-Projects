#include <Servo.h>
int sensor=A0;
int buzzer=8;
int led1=10;
int led2=11;
Servo motor;

int eskideger=100;


void setup() {
  motor.attach(9);
  pinMode(buzzer,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(sensor,INPUT);
}

void loop() {
  int sensordeger=analogRead(sensor);
  if(sensordeger>eskideger){
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
    digitalWrite(led2,HIGH);
    motor.write(180);
  }
  else{
    digitalWrite(buzzer,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led1,HIGH);
    motor.write(0);
  }

}
