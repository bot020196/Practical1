#include <stdio.h>
#include <wiringPi.h>
#define  LED 0
#define blinkTime 1000

int main(void){
        wiringPiSetup();
        pinMode (LED, OUTPUT);

        for (;;)
        {
            digitalWrite(LED, HIGH);
            delay(blinkTime);
            digitalWrite(LED, LOW);
            delay(blinkTime);
        }

        return 0;
}

