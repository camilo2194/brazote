#include <Servo.h>
#define pinBase 12
#define pinDerecho 11
#define pinIzquierdo 10
#define pinMano 9

Servo motorBase;
Servo motorDerecho;
Servo motorIzquierdo; // se declaran los servos 
Servo motorMano;

void setup() {
motorBase.attach(pinBase);
motorDerecho.attach(pinDerecho);
motorIzquierdo.attach(pinIzquierdo);
motorMano.attach(pinMano);
motorBase.write(0);
motorDerecho.write(0);
motorIzquierdo.write(0);
motorMano.write(0);
delay(2000);//espera 2 segundos
delay(2000);//espera 2 segundos 
motorBase.write(90);
delay(2000);//espera 2 segundos 
motorDerecho.write(90);
delay(2000);//espera 2 segundos 
motorIzquierdo.write(90);
delay(2000);//espera 2 segundos 
motorMano.write(90);
delay(2000);// espera 2 segundos 
}

void loop() {
  // put your main code here, to run repeatedly:

}
