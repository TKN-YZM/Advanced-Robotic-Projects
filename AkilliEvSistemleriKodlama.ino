int role1=8;
int role2=9;

int role3=10;
int role4=11;

char komut;

void setup() {
  Serial.begin(9600);
  pinMode(role1,OUTPUT);
  pinMode(role2,OUTPUT);
  pinMode(role3,OUTPUT);
  pinMode(role4,OUTPUT);

}

void loop() {
  if(Serial.available()>0){
    komut=Serial.read();

    if(komut=="O"){
      digitalWrite(role1,HIGH);
    }
    else if(komut=="V"){
      digitalWrite(role2,HIGH);
    }
    else if(komut=="M"){
      digitalWrite(role3,HIGH);
    }
   else if(komut=="Y"){
    digitalWrite(role4,HIGH); 
   }
  }

}
