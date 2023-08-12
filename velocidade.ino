//######################## AJUSTE DE PERIODO / RPM #####################

void vel()

{

  // ajusta a quantidade simulada de rotações de acordo com o ajuste das chaves  dip switch


  if (digitalRead(pin1) == LOW && digitalRead(pin2) == LOW && digitalRead(pin4) == LOW && digitalRead(pin8) == LOW) //0
  {
    RPM = 500;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == LOW && digitalRead(pin4) == LOW && digitalRead(pin8) == LOW) //0
  {
    RPM = 1000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == HIGH && digitalRead(pin4) == LOW && digitalRead(pin8) == LOW) //0
  {
    RPM = 2000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == HIGH && digitalRead(pin4) == LOW && digitalRead(pin8) == LOW) //0
  {
    RPM = 3000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == LOW && digitalRead(pin4) == HIGH && digitalRead(pin8) == LOW) //0
  {
    RPM = 4000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == LOW && digitalRead(pin4) == HIGH && digitalRead(pin8) == LOW) //0
  {
    RPM = 5000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == HIGH && digitalRead(pin4) == HIGH && digitalRead(pin8) == LOW) //0
  {
    RPM = 6000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == HIGH && digitalRead(pin4) == HIGH && digitalRead(pin8) == LOW) //0
  {
    RPM = 7000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == LOW && digitalRead(pin4) == LOW && digitalRead(pin8) == HIGH) //0
  {
    RPM = 8000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == LOW && digitalRead(pin4) == LOW && digitalRead(pin8) == HIGH) //0
  {
    RPM = 9000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == HIGH && digitalRead(pin4) == LOW && digitalRead(pin8) == HIGH) //0
  {
    RPM = 10000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == HIGH && digitalRead(pin4) == LOW && digitalRead(pin8) == HIGH) //0
  {
    RPM = 11000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == LOW && digitalRead(pin4) == HIGH && digitalRead(pin8) == HIGH) //0
  {
    RPM = 12000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == LOW && digitalRead(pin4) == HIGH && digitalRead(pin8) == HIGH) //0
  {
    RPM = 13000;
  }
  else if (digitalRead(pin1) == LOW && digitalRead(pin2) == HIGH && digitalRead(pin4) == HIGH && digitalRead(pin8) == HIGH) //0
  {
    RPM = 14000;
  }
  else if (digitalRead(pin1) == HIGH && digitalRead(pin2) == HIGH && digitalRead(pin4) == HIGH && digitalRead(pin8) == HIGH) //0
  {
    RPM = 15000;
  }

  else
  {
    RPM = 0;
  }

  //#################ACRESCIMO DE 20% DO VALOR ESCOLHIDO NAS CHAVES
  if (digitalRead(pin20) == HIGH)
  {
    RPM = RPM * 1.2;
    digitalWrite(led20, HIGH);
  }
  else {
    digitalWrite(led20, LOW);
  }
}
