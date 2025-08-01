#ifndef WATERING_H
#define WATERING_H

#include "config.h"
void update_watering(const SensorData_t *data, SystemConfig_t *cfg, PumpState_t *pump);

#endif