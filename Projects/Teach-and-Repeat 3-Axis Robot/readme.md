### 🤖 Teach-and-Repeat 3-Axis Robot (ESP32 Bluetooth Controlled) ###

**📝 Project Overview**

This project implements a Teach-and-Repeat (or Record-and-Play) control system for a 3-DOF articulated robotic arm using an ESP32 microcontroller.
The arm's positions are taught (recorded) via physical buttons after manual control via a serial monitor or Bluetooth, and then played back in a continuous loop.

### ⚙️ Features ###

**3-Axis Articulated Control**: Controls the base, shoulder, and elbow joints (plus an optional fourth joint/gripper).

**Record & Playback**: Saves up to 10 sequential positions and plays them back in a continuous loop.

**Smooth Movement**: Utilizes a custom function (moveServosSmooth) for synchronized, non-jerky motion between all joints.

**Dual Control Interface**: Accepts commands via Serial Monitor (USB) and Bluetooth Serial (Wireless).

**Physical Buttons**: Dedicated push buttons for RECORD and PLAY functionality.

## 🔩 Hardware & Wiring ##

**🧰 Components**

Microcontroller: ESP32 Development Board

Servos: 4 x SG90 or similar small servo motors

Robot Body: 3D-printed articulated arm structure

Control Buttons: 2 x Momentary Push Buttons

Power Supply: External 5V power supply for the servos (Recommended)

### Pinout ###

```
Component        Function                ESP32 Pin
--------------------------------------------------
Servo 1          Base Joint              5  (SERVO1_PIN)
Servo 2          Shoulder Joint          18 (SERVO2_PIN)
Servo 3          Elbow Joint             19 (SERVO3_PIN)
Servo 4          Wrist/Gripper           21 (SERVO4_PIN)

Record Button    Record Current Pose     22 (RECORD_BTN)
Play Button      Start/Loop Playback     23 (PLAY_BTN)

```

###🚀 Usage Instructions ###

**1. Initial Setup**
Upload the code to your ESP32 board.

Open the Serial Monitor (Baud Rate: 115200).

Connect to the Bluetooth device named: ```ESP32_RobotArm```.

**2. Manual Control (Teaching Mode)**
Use the Serial Monitor or a Bluetooth Terminal app to send commands. Servos accept angles from 0 to 180.
```
Command           Format                  Description                  Example
S1 <angle>        Set Servo 1 (Base)      to Angle                     S1 150
S2 <angle>        Set Servo 2 (Shoulder)  to Angle                     S2 60
S3 <angle>        Set Servo 3 (Elbow)     to Angle                     S3 90

```

### 3. Recording a Sequence ###
Move the arm to the desired position using the manual commands.

Press and release the ```RECORD button``` (PIN 22).

The console will confirm: 📌 Recorded step #1.

Repeat steps 1 and 2 for up to 10 poses.

### 4. Playing the Sequence ###
Press and release the ```PLAY button``` (PIN 23).

The robot will smoothly move through all recorded steps in sequence, pausing for 2 seconds between each pose.

The sequence will ```loop continuously``` until the ESP32 is reset.
