// Pulse output 1 and 2
#define pinOut_1 19
#define pinOut_2 18

//  RPM Plus 20% led 
#define led20 5

// Dip switch inputs

#define pin1 34 //   binary 4bits
#define pin2 35 //   binary 4bits
#define pin4 32 //   binary 4bits
#define pin8 33 //   binary 4bits
#define pin20 25 // pin + 20%

#define pinSync1 26 // sync change
#define pinSync2 27 // // risyng or faling signal

// ################## Pulse time adjust
unsigned long pulse = 50; // Duty cycle time 50ms
unsigned long noiseTime = 33; // SIMULATE A 33 ms NOISE PULSE AFTER A FIRST PULSE TO CHECK ROUTINE INTERRUPTION

unsigned long off , RPM , rpmCycle;
boolean alternatedPulse = true ;
float timeCorrectionAdjust;

void setup()
{

  // LED SINALIZATION
  pinMode(pinOut_1, OUTPUT); // PIN 19
  pinMode(pinOut_2, OUTPUT); // PIN 18
  pinMode(led20, OUTPUT); // PIN 5

  // RMP PIN SETTINGS FROM DIP SWITCH
  pinMode(pin1, INPUT); // PIN 34
  pinMode(pin2, INPUT); // PIN 35
  pinMode(pin4, INPUT); // PIN 32
  pinMode(pin8, INPUT); // PIN 33
  // RPM ADD 20%
  pinMode(pin20, INPUT); // PIN 25

  // CHANGE PULSE OUTPUT TO FALLING (HIGH) OR RIZING (LOW)
  pinMode(pinSync1, INPUT); // PIN 26
  // CHANGE PULSE SYNC ON(HIGH) OR ALTERNATED SYNC (LOW)
  pinMode(pinSync2, INPUT); // PIN 27
  
}


void loop()
{
  // subroutine that defines the RPM variation
  // and this variation can be modified without having to restart the processor
  vel();

  timeCorrectionAdjust = 1; // use this value to correct the period of the pulses if there is inaccuracy in your processor.
  rpmCycle = (1000000 / (RPM / 60)) * timeCorrectionAdjust ;
  off = (rpmCycle - (2 * pulse) - noiseTime);

  syncType();

}
