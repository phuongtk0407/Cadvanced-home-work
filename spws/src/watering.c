#include "watering.h"
#include <stdio.h>

void update_watering(const SensorData_t *data, SystemConfig_t *cfg, PumpState_t *pump) {
    if (cfg->mode == MODE_AUTO) {
        if (data->soil_moisture < cfg->moisture_min) {
            *pump = PUMP_ON;
            printf("[WATERING] Pump ON (Auto)\n");
        } else if (data->soil_moisture > cfg->moisture_max) {
            *pump = PUMP_OFF;
            printf("[WATERING] Pump OFF (Auto)\n");
        }
    }
    // Manual mode handled elsewhere
}