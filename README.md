# AC_dimmer_circuit
AC Dimmer Circuit with Arduino
This project involves designing an AC dimmer circuit as part of a Home Energy Management System (HEMS), which automatically adjusts the brightness of an AC bulb based on the ambient light. The system integrates an Arduino microcontroller, light sensor, potentiometer, and an AC dimmer module (ACDM1).

# Table of Contents
Project Overview
Components
Circuit Diagram
Setup and Wiring
Output Video
How It Works
Benefits
License
# Project Overview
The AC dimmer circuit dynamically adjusts an AC bulb's brightness in response to changes in ambient light levels. When the surroundings become dimmer, the bulb brightens, and when the environment is brighter, the bulb dims. This setup is ideal for applications in energy management, as it helps in reducing power consumption by optimizing lighting based on real-time light conditions.

# Components
Arduino microcontroller
Light sensor (e.g., LDR)
AC dimmer module (ACDM1)
Potentiometer
AC bulb
Additional passive components (wires, resistors, etc.)
# Circuit Diagram
Refer to the circuit diagram provided above for detailed wiring instructions.

# Setup and Wiring
Connect the Light Sensor to an analog input on the Arduino to monitor ambient light levels.
Connect the AC Dimmer Module to the Arduino, which controls the brightness of the AC bulb.
Connect the Potentiometer to adjust sensitivity or brightness levels manually if needed.
Wire the AC Bulb to the output of the AC dimmer module.
Supply the circuit with an appropriate AC voltage and ground.
# Output Video
Check out the output video to see the AC dimmer circuit in action, demonstrating how the brightness adjusts based on the light sensor's input.

# How It Works
Light Sensor Detection: The light sensor detects changes in ambient light and sends data to the Arduino.
Arduino Processing: The Arduino processes the light sensor readings and sends control signals to the dimmer module.
AC Dimmer Adjustment: The AC dimmer module modulates the power supplied to the bulb, adjusting its brightness in response to the light conditions.
# Benefits
Energy Efficiency: By adapting to ambient lighting, the circuit conserves energy.
Comfort and Convenience: Maintains optimal lighting levels without manual adjustments.
Scalability: Can be integrated into larger home automation or energy management systems.
# License
This project is open-source and free to use and modify.
