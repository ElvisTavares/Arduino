//Autor: Elvis Tavares
//Programa: Controle de servo com modulo joystick

#include <VarSpeedServo.h>
//Biblioteca VarSppedServo https://github.com/filipeflop/VarSpeedServo
//Imagem do projeto: https://imgur.com/KDCz7B7

VarSpeedServo servoX; //cria objeto para movimentar o servo

int pinoX = A4;// pino ligado no X do joystick
int valX; // variavel para armazenar valor do pino x;

void setup() {
 servoX.attach(7,1,180); //define a porta a sr ligada no servo

}

void loop() {
  valX = analogRead(pinoX);// recebe valor do joystick
  valX = map(valX, 0, 1023, 1,180);//cnverteo valor lido para valor entre 1 e 180 graus
  servoX.slowmove(valX, 60);// move o servo para a posisão definida
  delay(30);

}
