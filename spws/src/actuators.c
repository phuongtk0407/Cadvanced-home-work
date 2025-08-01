#include "actuators.h"
#include <stdio.h>

void update_actuators(PumpState_t pump, LEDState_t led) {
    printf("[ACTUATORS] Pump: %s, LED: ", pump == PUMP_ON ? "ON" : "OFF");
    switch (led) {
        case LED_NORMAL: printf("Green\n"); break;
        case LED_WATERING: printf("Yellow\n"); break;
        case LED_LOW_MOISTURE_ALERT: printf("Blue\n"); break;
        case LED_ERROR: printf("Red\n"); break;
    }
}