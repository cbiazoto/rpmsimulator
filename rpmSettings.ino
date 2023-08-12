//######################## RPM setup #####################

void vel()

{

  // Change RPM using dip switch


  if (digitalRead(pin1) == LOW && digitalRead(pin2) == LOW && digitalRead(pin4) == LOW && digitalRead(pin8) == LOW) 
  {
    RPM = 500;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == LOW && digitalRead(pin4) == LOW && digitalRead(pin8) == LOW) 
  {
    RPM = 1000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == HIGH && digitalRead(pin4) == LOW && digitalRead(pin8) == LOW) 
  {
    RPM = 2000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == HIGH && digitalRead(pin4) == LOW && digitalRead(pin8) == LOW) 
  {
    RPM = 3000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == LOW && digitalRead(pin4) == HIGH && digitalRead(pin8) == LOW) 
  {
    RPM = 4000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == LOW && digitalRead(pin4) == HIGH && digitalRead(pin8) == LOW) 
  {
    RPM = 5000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == HIGH && digitalRead(pin4) == HIGH && digitalRead(pin8) == LOW) 
  {
    RPM = 6000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == HIGH && digitalRead(pin4) == HIGH && digitalRead(pin8) == LOW) 
  {
    RPM = 7000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == LOW && digitalRead(pin4) == LOW && digitalRead(pin8) == HIGH) 
  {
    RPM = 8000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == LOW && digitalRead(pin4) == LOW && digitalRead(pin8) == HIGH) 
  {
    RPM = 9000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == HIGH && digitalRead(pin4) == LOW && digitalRead(pin8) == HIGH) 
  {
    RPM = 10000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == HIGH && digitalRead(pin4) == LOW && digitalRead(pin8) == HIGH) 
  {
    RPM = 11000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == LOW && digitalRead(pin4) == HIGH && digitalRead(pin8) == HIGH) 
  {
    RPM = 12000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == LOW && digitalRead(pin4) == HIGH && digitalRead(pin8) == HIGH) 
  {
    RPM = 13000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == HIGH && digitalRead(pin4) == HIGH && digitalRead(pin8) == HIGH) 
  {
    RPM = 14000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == HIGH && digitalRead(pin4) == HIGH && digitalRead(pin8) == HIGH) 
  {
    RPM = 15000;
  }

  else
  {
    RPM = 0;
  }

  // increase RPM to 20% more and switch a led on 
  if (digitalRead(pin20) == HIGH)
  {
    RPM = RPM * 1.2;
    digitalWrite(led20, HIGH);
  }
  else {
    digitalWrite(led20, LOW);
  }
}
