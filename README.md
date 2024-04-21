# GripHero

This repository contains Arduino C++ code for controlling a motor using an H-bridge circuit. The code reads analog input from a potentiometer and adjusts the motor direction accordingly.

## Requirements
- Arduino IDE
- Arduino Nano or similar board
- Mini-B USB cable
- H-bridge circuit setup (not included in this repository)

## Setup
1. **Clone or download** this repository to your local machine.
2. **Open the Arduino IDE**.
3. **Copy the code** from `motor_control_code.cpp` and paste it into a new sketch in the Arduino IDE.
4. **Connect your Arduino Nano** to your computer using a Mini-B USB cable.
5. **Select the appropriate board and port** in the Arduino IDE settings.
6. **Upload the sketch** to your Arduino Nano.

## Usage
1. After uploading the code to your Arduino Nano, **open the Serial Monitor** in the Arduino IDE to test the potentiometer readings and motor actions.
2. **Turn the potentiometer** connected to analog pin A0 to observe the analog voltage readings ranging from 0 to 1023.
   - The Serial Monitor will display these voltage readings, allowing you to verify that the potentiometer is being read correctly.
   - As you turn the potentiometer, observe how the voltage readings change.
3. **Test the motor actions** by turning the potentiometer:
   - When sliding the potentiometer in one direction, the motor will spin in that direction.
   - This action will either contract the hand by pulling the strings down or release the tension, allowing the hand to open.

## Code Structure
- `direction1` and `direction2` are defined as output pins for controlling the motor direction.
- `analogPin` is defined as the input pin for reading analog voltage.
- `voltageReadingi` and `voltageReadingf` store the initial and final voltage readings from the potentiometer.
- `change` stores the difference between the final and initial voltage readings.
- `open()` and `close()` functions control the motor to open and close based on the change in voltage.
- `off()` function turns off all motor outputs.
- `loop()` continuously reads the analog input, calculates the voltage change, and adjusts the motor direction accordingly.
