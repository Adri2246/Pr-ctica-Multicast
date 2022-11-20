const byte pinAnalogico = A0;   //Pin del LDR


void setup() 
{
   Serial.begin(9600);
}

void loop()
{ 
  // Leer pin analogico
  int valor = analogRead(pinAnalogico);
 
  // Mostrar valor pin analógico
  //Serial.println(valor);
  // Sentencia if con Arduino
  if (valor > 500) {
    Serial.println("d");
  }else{
    Serial.println("n");
  }
 
  // Retardo de 1000 ms
  delay(1000);
}