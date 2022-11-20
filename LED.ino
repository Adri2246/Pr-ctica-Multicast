const int pinLED = 9;
int estado=0;

void setup() 
{
   Serial.begin(9600);
   pinMode(pinLED, OUTPUT);
}

void loop()
{
   char option = Serial.read();
      if (option == 'n' && estado==0)
      {
        digitalWrite(pinLED, HIGH); 
        delay(100);
        estado=1;
      }
      if (option == 'd' && estado==1)
      {
        digitalWrite(pinLED, LOW);
        delay(100);
        estado=0;
            }
}


