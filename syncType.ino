void syncType()
{
  if (digitalRead(pinSync1) == LOW && digitalRead(pinSync2) == LOW )  // alternado
  {
    if (troca == true)
    {

      troca = false;
      digitalWrite(CDI_P2, LOW);
      digitalWrite(CDI_P1, HIGH);
      delayMicroseconds(pulso);
      digitalWrite(CDI_P1, LOW);
      // ####################espurio simulado
      delayMicroseconds(espuriaTime);
      digitalWrite(CDI_P1, HIGH);
      delayMicroseconds(pulso);
      digitalWrite(CDI_P1, LOW);
      delayMicroseconds(off);

    }
    else
    {
      troca = true;
      digitalWrite(CDI_P1, LOW);
      digitalWrite(CDI_P2, HIGH);
      delayMicroseconds(pulso);
      digitalWrite(CDI_P2, LOW);
      // ####################espurio simulado
      delayMicroseconds(espuriaTime);
      digitalWrite(CDI_P2, HIGH);
      delayMicroseconds(pulso);
      digitalWrite(CDI_P2, LOW);
      delayMicroseconds(off);
    }

  }
  else if (digitalRead(pinSync1) == LOW && digitalRead(pinSync2) == HIGH )  // sincronizado 
  {
    digitalWrite(CDI_P2, HIGH);
    digitalWrite(CDI_P1, HIGH);
    delayMicroseconds(pulso);
    digitalWrite(CDI_P1, LOW);
    digitalWrite(CDI_P2, LOW);
    // ####################espurio simulado
    delayMicroseconds(espuriaTime);
    digitalWrite(CDI_P1, HIGH);
    digitalWrite(CDI_P2, HIGH);
    delayMicroseconds(pulso);
    digitalWrite(CDI_P1, LOW);
    digitalWrite(CDI_P2, LOW);
    delayMicroseconds(off);
  }
  else if (digitalRead(pinSync1) == HIGH && digitalRead(pinSync2) == LOW )  // alternado invertido
  {
    if (troca == true)
    {

      troca = false;
      digitalWrite(CDI_P2, HIGH);
      digitalWrite(CDI_P1, LOW);
      delayMicroseconds(pulso);
      digitalWrite(CDI_P1, HIGH);
      // ####################espurio simulado
      delayMicroseconds(espuriaTime);
      digitalWrite(CDI_P1, LOW);
      delayMicroseconds(pulso);
      digitalWrite(CDI_P1, HIGH);
      delayMicroseconds(off);

    }
    else
    {
      troca = true;
      digitalWrite(CDI_P1, HIGH);
      digitalWrite(CDI_P2, LOW);
      delayMicroseconds(pulso);
      digitalWrite(CDI_P2, HIGH);
      // ####################espurio simulado
      delayMicroseconds(espuriaTime);
      digitalWrite(CDI_P2, LOW);
      delayMicroseconds(pulso);
      digitalWrite(CDI_P2, HIGH);
      delayMicroseconds(off);
    }


  }
  else if (digitalRead(pinSync1) == HIGH && digitalRead(pinSync2) == HIGH ) // sincronizado invertido
  {
    digitalWrite(CDI_P2, LOW);
    digitalWrite(CDI_P1, LOW);
    delayMicroseconds(pulso);
    digitalWrite(CDI_P1, HIGH);
    digitalWrite(CDI_P2, HIGH);
    // ####################espurio simulado
    delayMicroseconds(espuriaTime);
    digitalWrite(CDI_P1, LOW);
    digitalWrite(CDI_P2, LOW);
    delayMicroseconds(pulso);
    digitalWrite(CDI_P1, HIGH);
    digitalWrite(CDI_P2, HIGH);
    delayMicroseconds(off);
  }
}
