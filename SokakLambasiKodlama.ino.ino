int ldr=A0;
int role=8;

int ldrdeger=0;



void setup() {
  pinMode(role,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  ldrdeger=analogRead(ldr);

  if(ldrdeger<80){
    digitalWrite(role,HIGH);
  }
  else{
    digitalWrite(role,LOW);
  }

  

}
