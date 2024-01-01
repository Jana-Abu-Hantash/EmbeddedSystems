# Solar tracking Project

## Overview
This project is an embedded system project aimed at optimizing solar energy collection by dynamically adjusting the orientation of a solar panel. Utilizing sensors, actuators, and a smart algorithm, the system enhances energy efficiency and demonstrates the practical application of embedded systems in renewable energy technology.

## Features
- **Light Intensity Tracking**: Uses light sensors to determine the optimal angle for the solar panel to maximize sunlight exposure.
- **Temperature and Humidity Monitoring**: Incorporates DHT11 sensor for environmental condition monitoring.
- **Rain Detection**: Features a raindrop sensor for adverse weather detection and protective response.
- **Efficient Power Management**: Utilizes solar energy stored in batteries with a USB power option for insufficient sunlight conditions.
- **User Interface**: Includes an LCD display for real-time data visualization and system status.

## Hardware Components
- **Keyestudio UNO Development Board**: ATMEGA328P microcontroller based board for sensor data processing and actuator control.
- **Sensors**: BH1750 Light Sensor, Digital Light Intensity Module, DHT11 Temperature and Humidity Sensor, and Raindrop Sensor.
- **Actuators**: Precision servo motors for solar panel orientation.
- **Power Management**: Solar Panel with Battery Holder and Lithium Power Module. Includes a Smart Phone Charging Module.
- **Additional Components**: Piezo Buzzer for rain detection alert and an LCD Display for data visualization.

## Software
Developed using Arduino IDE with structured key functions to control and monitor various hardware components. The software includes library inclusions for I2C communication, light measurement, temperature and humidity sensing, and servo motor control.

## Operation and Process
The development involved model construction, sensor integration, servo motor calibration, sensor configuration, battery testing, and iterative software development. Each stage ensured the system's functionality, reliability, and efficiency.

## Challenges and Solutions
- **Limited Analog Pins**: Addressed by reconfiguring sensors and prioritizing essential functions.
- **Sensor Configuration**: Transitioned the rain sensor from digital to analog mode for better reliability.
- **Energy Efficiency**: Ensured that the batteries are capable of charging external devices effectively.

## Related Work
While solar tracking systems are common, this project stands out by integrating a raindrop sensor, enhancing the system's responsiveness to weather changes and protecting the solar panel from adverse conditions.

## Conclusion
The Keyestudio Sun Follower project showcases the potential and versatility of embedded systems in renewable energy. Its successful implementation of sensors, actuators, and intelligent control demonstrates the practicality of smart solar tracking systems. The project opens avenues for future enhancements in scalability and connectivity, further extending its applicability and efficiency.
