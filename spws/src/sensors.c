#include "sensors.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void read_sensors(SensorData_t *data) {
    // Simulate random sensor values
    data->soil_moisture = rand() % 101;
    data->air_temp = 20 + rand() % 15;
    printf("[SENSORS] Soil moisture: %d%%, Air temp: %d°C\n", data->soil_moisture, data->air_temp);
}