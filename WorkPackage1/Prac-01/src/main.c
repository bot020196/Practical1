#include <stdio.h>
#include <wiringPi.h>
#define  LED 12

int main(void){
        wiringPiSetup();
        pinMode (LED, OUTPUT);

        for (;;){
                digitalWrite(LED, HIGH);
                delay(1000);
                digitalWrite(LED, LOW);
                delay(1000);
        }

        return 0;
}

