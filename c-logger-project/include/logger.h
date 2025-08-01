// filepath: /home/phuong/workspace/Bai2/c-logger-project/include/logger.h

#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>
#include <time.h>

typedef enum {
    LOG_EMERGENCY,
    LOG_ALERT,
    LOG_CRITICAL,
    LOG_ERROR,
    LOG_WARNING,
    LOG_NOTICE,
    LOG_INFO,
    LOG_DEBUG
} log_level_t;

void logger_init(const char* filename, int level);
void logger_log(int level, const char* message);
void logger_set_level(int level);

#define log_message(level, message) \
    logger_log(level, message)

#endif // LOGGER_H