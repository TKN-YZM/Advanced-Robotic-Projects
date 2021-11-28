int SensorSol=4;
int SensorOrta=3;
int SensorSag=2;

int Motor1a=5;
int Motor1b=6;
int Motor1En=9;

int Motor2a=11;
int Motor2b=12;
int Motor2En=10;


void setup() {
  pinMode(SensorSol, INPUT);
  pinMode(SensorOrta, INPUT);
  pinMode(SensorSag, INPUT);
  
  pinMode(Motor1a, OUTPUT); 
  pinMode(Motor1b, OUTPUT);
  
  pinMode(Motor2a, OUTPUT);
  pinMode(Motor2b, OUTPUT);
}
void loop() {
  int sagdeger=digitalRead(SensorSag);
  int soldeger=digitalRead(SensorSol);
  int ortadeger=digitalRead(SensorOrta);
  
  if (soldeger==0 && ortadeger == 1 && sagdeger == 0) { 
    ileri();
  }
  if (soldeger== 0 && ortadeger== 0 && sagdeger== 1){ 
    sag();
  }
  if (soldeger== 1 && ortadeger==0 && sagdeger==0){
    sol();
  }
}
void ileri() { 
  digitalWrite(Motor1a, HIGH); 
  digitalWrite(Motor1b, LOW); 
  analogWrite(Motor1En, 150); 
  digitalWrite(Motor2a, HIGH); 
  digitalWrite(Motor2b, LOW); 
  analogWrite(Motor2En, 150); 
}
void sag() { 
  digitalWrite(Motor1a, HIGH); 
  digitalWrite(Motor1b, LOW); 
  analogWrite(Motor1En, 0);
  digitalWrite(Motor2a, HIGH); 
  digitalWrite(Motor2b, LOW); 
  analogWrite(Motor2En, 150); 
}
void sol() { 
  digitalWrite(Motor1a, HIGH); 
  digitalWrite(Motor1b, LOW); 
  analogWrite(Motor1En, 150);
  digitalWrite(Motor2a, HIGH); 
  digitalWrite(Motor2b, LOW); 
  analogWrite(Motor2En, 0); 
}
void dur() { 
  digitalWrite(Motor1a, HIGH);
  digitalWrite(Motor1b, LOW);
  digitalWrite(Motor1En, LOW);
  digitalWrite(Motor2a, HIGH);
  digitalWrite(Motor2b, LOW);
  digitalWrite(Motor2En, LOW);
}
