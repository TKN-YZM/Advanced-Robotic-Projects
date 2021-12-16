int sensor1=6;
int sensor2=7;

int role1=8;
int role2=9;

int buzzer1=3;
int buzzer2=4;

int sensor1deger=0;
int sensor2deger=0;


void setup() {
  pinMode(sensor1,INPUT);
  pinMode(sensor2,INPUT);
  pinMode(role1,OUTPUT);
  pinMode(role2,OUTPUT);
  pinMode(buzzer1,OUTPUT);
  pinMode(buzzer2,OUTPUT);

}

void loop() {
  sensor1deger=digitalRead(sensor1);
  sensor2deger=digitalRead(sensor2);

  if(sensor1deger==HIGH){
    digitalWrite(role1,HIGH);
    digitalWrite(buzzer1,HIGH);
    delay(120);
    digitalWrite(buzzer1,LOW);
  }
  else if(sensor2deger==HIGH){
    digitalWrite(role2,HIGH);
    digitalWrite(buzzer2,HIGH);
    delay(120);
    digitalWrite(buzzer2,LOW);
  }
  else{
    digitalWrite(role1,LOW);
    digitalWrite(role2,LOW);
    digitalWrite(buzzer1,LOW);
    digitalWrite(buzzer2,LOW);
    
  }
  

}
