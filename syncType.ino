void syncType()
{
  if (digitalRead(pinSync1) == LOW && digitalRead(pinSync2) == LOW )  // alternado
  {
    if (alternatedPulse == true)
    {

      alternatedPulse = false;
      digitalWrite(pinOut_2, LOW);
      digitalWrite(pinOut_1, HIGH);
      delayMicroseconds(pulse);
      digitalWrite(pinOut_1, LOW);
      // #################### simulate noise
      delayMicroseconds(noiseTime);
      digitalWrite(pinOut_1, HIGH);
      delayMicroseconds(pulse);
      digitalWrite(pinOut_1, LOW);
      delayMicroseconds(off);

    }
    else
    {
      alternatedPulse = true;
      digitalWrite(pinOut_1, LOW);
      digitalWrite(pinOut_2, HIGH);
      delayMicroseconds(pulse);
      digitalWrite(pinOut_2, LOW);
      // #################### simulate noise
      delayMicroseconds(noiseTime);
      digitalWrite(pinOut_2, HIGH);
      delayMicroseconds(pulse);
      digitalWrite(pinOut_2, LOW);
      delayMicroseconds(off);
    }

  }
  else if (digitalRead(pinSync1) == LOW && digitalRead(pinSync2) == HIGH )  // sincronizado 
  {
    digitalWrite(pinOut_2, HIGH);
    digitalWrite(pinOut_1, HIGH);
    delayMicroseconds(pulse);
    digitalWrite(pinOut_1, LOW);
    digitalWrite(pinOut_2, LOW);
    // #################### simulate noise
    delayMicroseconds(noiseTime);
    digitalWrite(pinOut_1, HIGH);
    digitalWrite(pinOut_2, HIGH);
    delayMicroseconds(pulse);
    digitalWrite(pinOut_1, LOW);
    digitalWrite(pinOut_2, LOW);
    delayMicroseconds(off);
  }
  else if (digitalRead(pinSync1) == HIGH && digitalRead(pinSync2) == LOW )  // alternado invertido
  {
    if (alternatedPulse == true)
    {

      alternatedPulse = false;
      digitalWrite(pinOut_2, HIGH);
      digitalWrite(pinOut_1, LOW);
      delayMicroseconds(pulse);
      digitalWrite(pinOut_1, HIGH);
      // #################### simulate noise
      delayMicroseconds(noiseTime);
      digitalWrite(pinOut_1, LOW);
      delayMicroseconds(pulse);
      digitalWrite(pinOut_1, HIGH);
      delayMicroseconds(off);

    }
    else
    {
      alternatedPulse = true;
      digitalWrite(pinOut_1, HIGH);
      digitalWrite(pinOut_2, LOW);
      delayMicroseconds(pulse);
      digitalWrite(pinOut_2, HIGH);
      // #################### simulate noise
      delayMicroseconds(noiseTime);
      digitalWrite(pinOut_2, LOW);
      delayMicroseconds(pulse);
      digitalWrite(pinOut_2, HIGH);
      delayMicroseconds(off);
    }


  }
  else if (digitalRead(pinSync1) == HIGH && digitalRead(pinSync2) == HIGH ) // sincronizado invertido
  {
    digitalWrite(pinOut_2, LOW);
    digitalWrite(pinOut_1, LOW);
    delayMicroseconds(pulse);
    digitalWrite(pinOut_1, HIGH);
    digitalWrite(pinOut_2, HIGH);
    // #################### simulate noise
    delayMicroseconds(noiseTime);
    digitalWrite(pinOut_1, LOW);
    digitalWrite(pinOut_2, LOW);
    delayMicroseconds(pulse);
    digitalWrite(pinOut_1, HIGH);
    digitalWrite(pinOut_2, HIGH);
    delayMicroseconds(off);
  }
}
