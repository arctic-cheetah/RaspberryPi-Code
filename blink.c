#include <stdio.h>
#include <wiringPi.h>

#define PIN 8
#define VOLTAGE_MES 9

int main () {
    printf("Starting up\n");

    if (wiringPiSetup() == -1) {
        return -1;
    }

    pinMode(PIN, OUTPUT);
    pinMode(VOLTAGE_MES, OUTPUT);

    while (1) {
        digitalWrite(VOLTAGE_MES, 1);
        digitalWrite(PIN, 1);
        delay(500);
        digitalWrite(PIN, 0);
        delay(500);
    }
    return 0;
}