// Pulsadores
#define CDI_P1 19
#define CDI_P2 18

// 20% de acrescimo de RPM
#define led20 5
// pinos de configuração

#define pin1 34 // pin binario 4bits
#define pin2 35 // pin binario 4bits
#define pin4 32 // pin binario 4bits
#define pin8 33 // pin binario 4bits
#define pin20 25 // pin 20%

#define pinSync1 26 // pinos de sync
#define pinSync2 27 //

unsigned long pulso, off , RPM , ciclo, espuriaTime;
boolean troca = true ;
float fator;
