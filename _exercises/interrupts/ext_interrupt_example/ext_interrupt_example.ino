void setup()
{
  DDRD &= ~(1 << DDD2);
  EICRA |= ((1 << ISC00) | (1 << ISC01))  ;
  EIMSK |= (1 << INT0);
  Serial.begin(9600);
  sei();
}

void loop()
{
  //do nothing
}

ISR(INT0_vect)
{
  Serial.println("Interrupt fired");
};



