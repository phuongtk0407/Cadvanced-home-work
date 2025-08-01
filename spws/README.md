# Smart Plant Watering System (SPWS)

## Overview
The Smart Plant Watering System (SPWS) is an automated solution designed to monitor soil moisture and temperature, and to control watering based on sensor data. The system can operate in both automatic and manual modes, providing flexibility for users to manage their plants effectively.

## Project Structure
```

spws/
├── Makefile              # Build instructions
├── README.md             # Project documentation
├── include/              # Include file header (.h)
├── src/                  # Include file source (.c)
├── main.c                # Entry point of the application
└── build/                # Include complied file (.o) and execute file

```

## Setup Instructions
1. **Clone the Repository**: 
   ```
   git clone git@github.com:phuongtk0407/C-advanced.git
   cd spws
   ```

2. **Build the Project**: 
   Use the provided Makefile to compile the project.
   ```
   make
   ```

3. **Run the Application**: 
   After building, run the executable generated in the `src` directory.

## Usage
- The system automatically monitors soil moisture and temperature.
- In automatic mode, the system waters the plants based on predefined moisture thresholds.
- Users can switch to manual mode to trigger watering as needed.

## Features
- Soil moisture and temperature sensing
- Automated watering based on sensor data
- Manual watering option
- LED indicators for system status

## Contributing
Contributions are welcome! Please submit a pull request or open an issue for any enhancements or bug fixes.