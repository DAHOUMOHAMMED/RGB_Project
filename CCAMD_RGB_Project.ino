// DAHOU MOHAMMED 

////////////////////////////////////////////////////////
// ARDUINO FUNCTIONS  //////////////////////////////////
////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
// GLOBELS /////////////////////////////////////////////
////////////////////////////////////////////////////////

int ButtonPins[3] = {10 , 11 , 12};
int LedPins[3] = {5 , 6 , 7};

void setup()
{
  // put your setup code here, to run once:

  Serial.begin(115200);
  Serial.write("\nInitielize GPIOs for RGB demo.");

  // input

  pinMode(ButtonPins[0] , INPUT_PULLUP);
  pinMode(ButtonPins[1] , INPUT_PULLUP);
  pinMode(ButtonPins[2] , INPUT_PULLUP);

  // output 

  pinMode(LedPins[0] , OUTPUT);
  pinMode(LedPins[1] , OUTPUT);
  pinMode(LedPins[2] , OUTPUT);

}// end setup

void loop() 
{
  // put your main code here, to run repeatedly:

  for(int index = 0; index < 3; index++)
  {
    if(digitalRead(ButtonPins[index]) == 0)
    {
      for(int count = 0; count < 3; count++)
      {
        digitalWrite(LedPins[index], HIGH);
        delay(200);
        digitalWrite(LedPins[index], LOW);
        delay(200);
      } // end for count
    }   // end if

    else
      digitalWrite(LedPins[index], LOW);
  }
  


} // loop
