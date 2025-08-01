# c-logger-project README.md

# C Logger Project

This project implements a configurable logging module in C that supports multi-target logging, level filtering, and automatic metadata insertion. The logger can be easily integrated into any C project.

## Project Structure

```
c-logger-project
├── src
│   ├── logger.c       # Implementation of the logger module
│   └── main.c         # Entry point demonstrating logger usage
├── include
│   └── logger.h       # Header file defining the logger interface
├── Makefile           # Build script for compiling the project
└── README.md          # Documentation for the project
```

## Features

- **Multi-target Logging**: Log messages can be directed to both the console and a file.
- **Level Filtering**: Control which messages are logged based on severity levels.
- **Automatic Metadata Insertion**: Each log message includes a timestamp, file name, and line number for better traceability.

## Log Levels

The logger supports the following log levels, defined in `logger.h`:

- `LOG_EMERGENCY`
- `LOG_ALERT`
- `LOG_CRITICAL`
- `LOG_ERROR`
- `LOG_WARNING`
- `LOG_NOTICE`
- `LOG_INFO`
- `LOG_DEBUG`

## Usage

### Initialization

To initialize the logger, call the `logger_init` function. You can specify a filename for file output and a minimum log level.

```c
logger_init("logfile.txt", LOG_INFO);
```

### Logging Messages

Use the `logger_log` function to log messages at different levels. You can also use the convenience macro `log_message(level, message)` which automatically includes the file name and line number.

```c
logger_log(LOG_INFO, "This is an info message.");
log_message(LOG_ERROR, "This is an error message.");
```

### Changing Log Level

You can change the minimum log level at runtime using the `logger_set_level` function.

```c
logger_set_level(LOG_DEBUG);
```

## Building the Project

To compile the project, navigate to the project directory and run:

```bash
make
```

This will create an executable named `logger_app`.

## Cleaning Up

To remove build artifacts, use the following command:

```bash
make clean
```

## Example

Refer to `main.c` for an example of how to use the logger module in your application. It demonstrates initializing the logger, logging messages of various levels, and showcasing the filtering capabilities.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.