void setup()
{
  Serial.begin(9600);
  
  DDRB = 0x0;  
  PORTB = ~(1 < PCINT1) | 0x10; 
  Serial.println(PORTB, BIN);
  PCICR |= (1 << PCIE0);    // set PCIE0 to enable PCMSK0 scan
  PCMSK0 |= (1 << PCINT1);  // set PCINT0 to trigger an interrupt on state change 

  sei();  
}

void loop()
{
}

ISR (PCINT0_vect)
{
    Serial.print("Interrupt Fired: ");
    Serial.println(PINB, BIN);
}


