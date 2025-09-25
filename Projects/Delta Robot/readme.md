# 🤖 Delta Robot Project

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![GitHub issues](https://img.shields.io/github/issues/your-username/your-repo-name)](https://github.com/your-username/your-repo-name/issues)
[![GitHub stars](https://img.shields.io/github/stars/your-username/your-repo-name)](https://github.com/your-username/your-repo-name/stargazers)

A high-speed, high-precision parallel robot designed for pick-and-place operations. This repository contains all the necessary firmware, software, and hardware design files to build and operate your own Delta Robot.



---

## 📖 Table of Contents

- [About The Project](#about-the-project)
- [Key Features](#-key-features)
- [Tech Stack](#-tech-stack)
- [Getting Started](#-getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#-usage)
- [Project Structure](#-project-structure)
- [Contributing](#-contributing)
- [License](#-license)
- [Contact](#-contact)

---

## 🧐 About The Project

Delta robots are a type of parallel robot known for their speed and precision. They consist of three arms connected to universal joints at the base. The key design feature is the use of parallelograms in the arms, which maintains the orientation of the end effector. This project aims to create an accessible and open-source version, perfect for hobbyists, students, and researchers.

This implementation focuses on a 3-DOF (Degrees of Freedom) system for tasks like sorting objects, 3D printing, or simple assembly.

***

## ✨ Key Features

* **High Speed:** Optimized kinematics for rapid pick-and-place movements.
* **Precision Control:** Implements inverse and forward kinematics for accurate positioning of the end effector.
* **Modular Design:** 3D printable parts and off-the-shelf components make it easy to build and modify.
* **User-Friendly Interface:** Control the robot via a simple serial interface or a dedicated GUI (optional).
* **Open Source:** All firmware, software, and hardware files are freely available.

***

## 🛠️ Tech Stack

This project is built with a combination of hardware and software components:

* **Firmware:** C++ on the Arduino platform.
* **Control Board:** **Arduino Uno**.
* **Motors:** NEMA 17 Stepper Motors for precise motion.
* **CAD:** Fusion 360 / SolidWorks for mechanical parts design.
* **Slicer:** **Bambu Lab Slicer** for 3D printing the parts.

***

## 🚀 Getting Started

Follow these steps to get your Delta Robot up and running.

### Prerequisites

Ensure you have all the necessary hardware components assembled. A full Bill of Materials (BOM) can be found in the `/hardware` directory.

You'll need the following software:
* [Arduino IDE](https://www.arduino.cc/en/software)
* [Python 3.x](https://www.python.org/downloads/) (if using a Python-based controller)
* Any required Arduino libraries (e.g., `AccelStepper`).

### Installation

1.  **Clone the repository:**
    ```sh
    git clone [[https://github.com/C-Rohann/Portfolio/](https://github.com/C-Rohann/Portfolio/)]
    ```
2.  **Open the Firmware:**
    Navigate to the `/firmware` directory and open the `.ino` file in the Arduino IDE.
3.  **Install Libraries:**
    Go to `Sketch > Include Library > Manage Libraries` and install the necessary libraries mentioned in the firmware code.
4.  **Upload to Arduino:**
    Connect your Arduino Uno to your computer, select the correct board and port, and click the "Upload" button.

***

## 🕹️ Usage

Once the firmware is uploaded, you can control the robot using a serial monitor or a custom control script.

1.  Open the Serial Monitor in the Arduino IDE (set the baud rate to 9600 or as specified in your code).
2.  Send G-code commands to control the robot's movement.
    * `G0 X10 Y10 Z-50` - Move to specified coordinates.
    * `G28` - Home the robot.

For more advanced control, run the Python script in the `/software` directory:
```sh
python control_gui.py
