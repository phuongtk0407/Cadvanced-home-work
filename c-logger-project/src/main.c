#include <stdio.h>
#include "logger.h"

int main() {
    // Initialize the logger to log to a file and set the log level to LOG_DEBUG
    logger_init("logfile.txt", LOG_DEBUG);

    // Log messages of various levels
    log_message(LOG_INFO, "This is an info message.");
    log_message(LOG_WARNING, "This is a warning message.");
    log_message(LOG_ERROR, "This is an error message.");
    log_message(LOG_DEBUG, "This is a debug message.");
    log_message(LOG_ALERT, "This is an alert message.");
    log_message(LOG_EMERGENCY, "This is an emergency message.");

    // Change log level to LOG_ERROR
    logger_set_level(LOG_ERROR);
    log_message(LOG_DEBUG, "This debug message should not appear.");
    log_message(LOG_ERROR, "This error message should appear.");

    return 0;
}