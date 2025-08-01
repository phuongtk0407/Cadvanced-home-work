#include "mode_input.h"
#include <stdio.h>

void handle_user_input(SystemConfig_t *cfg, PumpState_t *pump) {
    char cmd;
    printf("[USER] Press 'a' for AUTO, 'm' for MANUAL, 'w' for manual watering: ");
    cmd = getchar();
    getchar(); // consume newline
    if (cmd == 'a') {
        cfg->mode = MODE_AUTO;
        printf("[USER] Switched to AUTO mode\n");
    } else if (cmd == 'm') {
        cfg->mode = MODE_MANUAL;
        *pump = PUMP_OFF;
        printf("[USER] Switched to MANUAL mode\n");
    } else if (cmd == 'w' && cfg->mode == MODE_MANUAL) {
        *pump = PUMP_ON;
        printf("[USER] Manual watering started\n");
    }
}