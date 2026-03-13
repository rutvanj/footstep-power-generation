# Footstep Power Generation using Piezoelectric Sensors ⚡

An Arduino-based project that converts mechanical energy from human footsteps into electrical energy using a piezoelectric sensor.
The system detects footsteps and displays the step count and generated voltage on a **16x2 I2C LCD display**.

This project demonstrates the concept of **energy harvesting**, where small amounts of mechanical energy can be converted into usable electrical energy.

---

## Overview

When a person steps on the piezoelectric sensor, mechanical pressure produces a small electrical voltage.

This voltage signal is:

1. Rectified using a **bridge rectifier**
2. Stabilized using a **capacitor**
3. Read by the **Arduino analog input**

A simple threshold-based algorithm detects steps and updates the LCD display with:

* Total number of steps
* Generated voltage

---

## Components Used

* Arduino Uno / Arduino Nano
* Piezoelectric Sensor
* Bridge Rectifier
* Capacitor (for signal smoothing)
* Voltage Divider
* 16x2 LCD Display with I2C Module
* Jumper Wires

---

## How It Works

1. A piezoelectric sensor generates voltage when pressure is applied.
2. The signal passes through a **bridge rectifier** to convert AC to DC.
3. A **capacitor smooths the signal** to stabilize the voltage.
4. Arduino reads the signal using an **analog input pin**.
5. When the voltage crosses a predefined threshold, a **step is detected**.
6. The **LCD display updates** with the step count and generated voltage.

---

## Example LCD Output

Steps: 15
Volt: 2.41V

---

## Project Structure

footstep-power-generation/

├── footstep_power_generation.ino
└── README.md

---

## Applications

* Energy-harvesting floors in smart buildings
* Public places such as railway stations or malls
* Smart city infrastructure
* Educational demonstration of renewable energy systems

---

## Possible Improvements

* Store generated energy using **supercapacitors**
* Calculate total energy generated
* Log step data to an **SD card**
* Add **Bluetooth or IoT monitoring**
* Build a **smart energy-harvesting floor system**

---

## Author

Rutva Jakhiya
B.Tech Information Technology
A. D. Patel Institute of Technology
