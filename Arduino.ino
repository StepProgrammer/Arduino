int LedPin=13;
void setup()
{
	
  /* add setup code here */
pinMode(LedPin,OUTPUT);
}

void loop()
{

  /* add main program code here */
	digitalWrite(LedPin,HIGH);
	delay(1000);
	digitalWrite(LedPin,LOW);
	delay(1000);

}
