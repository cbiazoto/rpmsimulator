#include "_definition.h"
void setup()
{
  Serial.begin(115200);
  Serial.println(F(__FILE__));

  //pinMode(CDI_P2, OUTPUT);
  pinMode(CDI_P1, OUTPUT); // PIN 19
  pinMode(CDI_P2, OUTPUT); // PIN 18
  pinMode(led20, OUTPUT); // PIN 5

  pinMode(pin1, INPUT); // PIN 34 
  pinMode(pin2, INPUT); // PIN 35
  pinMode(pin4, INPUT); // PIN 32
  pinMode(pin8, INPUT); // PIN 33

  pinMode(pin20, INPUT); // PIN 25
  pinMode(pinSync1, INPUT); // PIN 26
  pinMode(pinSync2, INPUT); // PIN 27

  espuriaTime = 33;
  vel();
}

// ##########################LOOP #######################

void loop()
{
  // sub rotina que define a variação de RPM
  // e esta variação pode ser modificada sem necessidade de reiniciar o processador
  vel();

  fator = 1; // utilize este valor para corrigir o período dos pulsos caso exista imprecisão no seu processador.
  ciclo = (1000000 / (RPM / 60)) * fator ;
  pulso = 50 ;
  off = (ciclo - (2 * pulso) - espuriaTime);

  syncType();



}
