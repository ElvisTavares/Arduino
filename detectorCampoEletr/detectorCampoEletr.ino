int const antenaG = 5;

int const ledVerd1 = 2;
int const ledVerd2= 3;
int const ledVerd3= 4;
int const ledVerm1= 5;
int const ledVerm2= 6;

int const buzzer= 7;

int  valorAnt = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledVerd1, OUTPUT);
  pinMode(ledVerd2,OUTPUT);
  pinMode(ledVerd3,OUTPUT);
  pinMode(ledVerm1,OUTPUT);
  pinMode(ledVerm2,OUTPUT);

  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  valorAnt = analogRead(antenaG);

  digitalWrite(ledVerd1, LOW);
  digitalWrite(ledVerd2, LOW);
  digitalWrite(ledVerd3, LOW);
  digitalWrite(ledVerm1, LOW);
  digitalWrite(ledVerm2, LOW);

  if (valorAnt >= 0){
    digitalWrite(ledVerd1,HIGH);
  }
   if (valorAnt >= 30){
    digitalWrite(ledVerd2,HIGH);
  }

   if (valorAnt >= 100){
    digitalWrite(ledVerd3,HIGH);
  }
   if (valorAnt >= 200){
    digitalWrite(ledVerm1,HIGH);
  }

   if (valorAnt >= 400){
    digitalWrite(ledVerm2,HIGH);
    tone(buzzer,60);
  }

  Serial.println(valorAnt);
  delay(100);
  noTone(buzzer);
}
