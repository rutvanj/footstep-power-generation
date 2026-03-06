# Footstep Power Generation ⚡

An Arduino-based project that detects footsteps using a **piezoelectric sensor** and displays the **step count and generated voltage** on a 16x2 I2C LCD display.

This project demonstrates how **mechanical energy from footsteps can be converted into electrical energy** and monitored using a microcontroller.

---

## Overview

When a person steps on the piezoelectric sensor, mechanical pressure generates a small electrical signal.
The signal is rectified and stabilized, then read by the Arduino through an analog pin.
A simple threshold algorithm detects steps and updates the LCD display.

---

## Components Used

* Arduino Uno / Arduino Nano
* Piezoelectric sensor
* Bridge rectifier
* Capacitor (for smoothing the signal)
* Voltage divider
* 16x2 LCD with I2C module
* Jumper wires

---

## How It Works

1. A **piezoelectric sensor** generates voltage when pressure is applied.
2. The signal passes through a **rectifier and capacitor** to stabilize the voltage.
3. Arduino reads the signal using an **analog input pin**.
4. If the voltage exceeds a **threshold**, a step is detected.
5. The **LCD displays**:

   * Total number of steps
   * Generated voltage

---

## Example LCD Output

Steps: 15
Volt: 2.41V

---

## Code

The Arduino code for this project is available in:

`footstep_power_generation.ino`

---

## Possible Improvements

* Store generated energy in **supercapacitors**
* Calculate **total energy produced**
* Log step data to an **SD card**
* Build a **smart energy-harvesting floor system**
* Add **Bluetooth / IoT monitoring**

---

## Author

Rutva Jakhiya
