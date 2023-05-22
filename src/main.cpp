#include <Arduino.h>

void
setup(void)
{
    Serial.begin(SERIAL_BAUD);
    pinMode(BUZZER,OUTPUT);
}

void
loop(void)
{
    for(int i = 100; i <= 2000; i+=100 )
    {
        Serial.println(i);
        tone(BUZZER,i,1000);
        delay(1000);
    }
}

