//Autor: Elvis Tavares
//Programa: Controle de servomotor com potenciometro

// Imagem pojeto: https://imgur.com/GT6TiLW
#include <Servo.h>
Servo servo1;

void setup() {
 servo1.attach(5);// objeto servo 1 anexado ao servo motor no pino 5

}

void loop() {
  int angulo = analogRead(0);///Lê valor do potenciometro
  angulo = map(angulo,0 , 1023, 0, 180);// mudança escala
  servo1.write(angulo);// angulo paa o sevomotor
  delay(20); //espera 20ms para o servo otor atinjir a posição

}
