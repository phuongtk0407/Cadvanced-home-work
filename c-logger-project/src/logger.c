#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <string.h>
#include "logger.h"

static int current_log_level = LOG_DEBUG;
static FILE *log_file = NULL;

void logger_init(const char* filename, int level) {
    current_log_level = level;
    if (filename) {
        log_file = fopen(filename, "a");
        if (!log_file) {
            perror("Failed to open log file");
        }
    }
}

void logger_set_level(int level) {
    current_log_level = level;
}

static const char* log_level_to_string(int level) {
    switch (level) {
        case LOG_EMERGENCY: return "EMERGENCY";
        case LOG_ALERT: return "ALERT";
        case LOG_CRITICAL: return "CRITICAL";
        case LOG_ERROR: return "ERROR";
        case LOG_WARNING: return "WARNING";
        case LOG_NOTICE: return "NOTICE";
        case LOG_INFO: return "INFO";
        case LOG_DEBUG: return "DEBUG";
        default: return "UNKNOWN";
    }
}

void logger_log(int level, const char* message) {
    if (level <= current_log_level) {
        time_t now;
        time(&now);
        char time_buffer[20];
        struct tm *tm_info = localtime(&now);
        strftime(time_buffer, sizeof(time_buffer), "%Y-%m-%d %H:%M:%S", tm_info);

        const char* level_str = log_level_to_string(level);
        if (log_file) {
            fprintf(log_file, "[%s] [%s] %s\n", time_buffer, level_str, message);
            fflush(log_file);
        }
        printf("[%s] [%s] %s\n", time_buffer, level_str, message);
    }
}

void logger_cleanup() {
    if (log_file) {
        fclose(log_file);
        log_file = NULL;
    }
}