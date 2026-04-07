#include <Arduino.h>

const char pinLed = 45;
void piscaLed (int pino, int hz, int qntd);

void setup() 
{
  Serial.begin(9600);
  piscaLed(45, 5, 5);
}

void loop() 
{

}

void piscaLed(int pino, int hz, int qntd)
{
  for (int i = 0; i < qntd; i++)
  {
    pinMode(pino, OUTPUT);

    digitalWrite(pino, HIGH);
    delay(1000 / 2 * hz);
    digitalWrite(pino, LOW);
    delay(1000 / 2 * hz);
    }
}