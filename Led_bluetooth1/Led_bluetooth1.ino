//Autor: Elvis Tavares
//Programa: Controle de led com modulo bluetooth HC-05
//Imagem do projeto: https://imgur.com/khRet47
#include <SoftwareSerial.h>

const int pinoRX = 2;// pino digital 2 ligado ao RX do modulo
const int pinoTX = 3;// pino digital 3 TX
const int pinoLED = 12; // pino digital ligadoao led
int vBluetooth = 0; //variavel armazena o valor enviado pelo modulo B

SoftwareSerial bluetooth(pinoRX, pinoTX); //pinos q emulam a serial

void setup(){
  Serial.begin(9600);//iniciliza serial
  bluetooth.begin(9600); //inicializa serialdo bluetooth
  delay(1000);
  pinMode(pinoLED, OUTPUT); // define o pino como saida
  
}


void loop(){
  if(bluetooth.available()){
    vBluetooth = bluetooth.read(); // recebe valor enviado pelo modulo

    if(vBluetooth =='1'){
      digitalWrite(pinoLED, HIGH); // ligao led
    }

    if(vBluetooth == '0'){
      digitalWrite(pinoLED, LOW); // desliga o led
    }
  }
}
