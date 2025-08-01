#ifndef CONFIG_H
#define CONFIG_H

#define MOISTURE_MIN 30
#define MOISTURE_MAX 70
#define WATERING_DURATION 10
#define SENSOR_CHECK_INTERVAL 5

typedef enum {
    MODE_AUTO,
    MODE_MANUAL
} SystemMode_t;

typedef enum {
    PUMP_OFF,
    PUMP_ON
} PumpState_t;

typedef enum {
    LED_NORMAL,
    LED_WATERING,
    LED_LOW_MOISTURE_ALERT,
    LED_ERROR
} LEDState_t;

typedef struct {
    int soil_moisture;
    int air_temp;
} SensorData_t;

typedef struct {
    int moisture_min;
    int moisture_max;
    int watering_duration;
    int sensor_interval;
    SystemMode_t mode;
} SystemConfig_t;

#endif