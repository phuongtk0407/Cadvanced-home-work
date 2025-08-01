# RGB LED Strip Driver

This project provides a driver for controlling addressable RGB LED strips. It includes an API for initializing the LED strip, setting pixel colors, filling the strip with a color, clearing the strip, and retrieving the buffer and pixel count.

## Project Structure

```
rgb-led-strip-driver
├── src
│   ├── led_driver.h      # Header file for the LED driver API
│   ├── led_driver.c      # Implementation of the LED driver
│   └── main.c            # Test program for the LED driver
├── Makefile              # Build instructions
└── README.md             # Project documentation
```

## Building the Project

To build the project, navigate to the project directory and run the following command:

```
make
```

This will compile the source files and create an executable.

## Running the Project

After building, you can run the test program with:

```
./main
```

## Usage

1. **Initialize the LED Strip**: Call the initialization function with the desired number of pixels.
2. **Set Pixel Colors**: Use the function to set individual pixel colors by specifying the pixel index and color values.
3. **Fill the Strip**: Fill the entire strip with a single color using the fill function.
4. **Clear the Strip**: Clear all pixels to turn off the LEDs.
5. **Retrieve Buffer**: Access the current state of the LED buffer for further manipulation or debugging.

## Additional Information

Ensure that you have the necessary permissions to access the hardware for controlling the LED strip. This project is designed for educational purposes and may require modifications for specific hardware setups.