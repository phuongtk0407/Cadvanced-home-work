#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "config.h"
#include "sensors.h"
#include "watering.h"
#include "actuators.h"
#include "mode_input.h"

int main(void) {
    srand(time(NULL));
    SensorData_t sensor = {0};
    SystemConfig_t config = {MOISTURE_MIN, MOISTURE_MAX, WATERING_DURATION, SENSOR_CHECK_INTERVAL, MODE_AUTO};
    PumpState_t pump = PUMP_OFF;
    LEDState_t led = LED_NORMAL;

    while (1) {
        read_sensors(&sensor);
        update_watering(&sensor, &config, &pump);
        handle_user_input(&config, &pump);

        // LED logic
        if (pump == PUMP_ON)
            led = LED_WATERING;
        else if (sensor.soil_moisture < config.moisture_min)
            led = LED_LOW_MOISTURE_ALERT;
        else
            led = LED_NORMAL;

        update_actuators(pump, led);

        sleep(config.sensor_interval);
    }
    return 0;
}