# 🤖 SLAM Bot: Simulation and Modeling (Fusion 360 & Gazebo Harmonic)

This repository details the **Virtual-Lidar-Bot**, a mobile robot designed for **Simultaneous Localization and Mapping (SLAM)**, fully implemented in a simulation environment using **ROS 2 Jazzy** and **Gazebo Harmonic**.  

The **mechanical design** was created in **Fusion 360**, and the robot uses a simulated **LIDAR** in Gazebo to perform SLAM.  

---

## 🌟 Project Overview
- **CAD Tool**: Autodesk Fusion 360 for all mechanical components and assembly  
- **Simulation Environment**: ROS 2 **Jazzy** + **Gazebo Harmonic**  
- **Robot Model**: URDF/Xacro generated from Fusion 360 CAD model  
- **Mapping**: 2D SLAM using **Cartographer ROS 2**  

---

## 📐 Mechanical Design (Fusion 360)

The robot chassis and component placements were designed in Fusion 360.  
The exported URDF was built to ensure **physical accuracy** for realistic simulation.  

- **Fusion 360 Files**: `/cad` folder  
- **Main Assembly File**: `my_bot.f3d`  

**CAD to Simulation Workflow**:
1. **Modeling** – All parts designed in Fusion 360 as Components  
2. **Joints** – Kinematic constraints applied (e.g., Revolute joints for wheels)  
3. **Export** – Assembly exported to URDF/Xacro using **fusion2urdf plugin**  

---

## 💻 Software & Simulation Setup

This project requires a working ROS 2 Jazzy installation with Gazebo Harmonic.  

### 1. Dependencies
Install the required ROS 2 packages:

```bash
sudo apt update
sudo apt install ros-jazzy-gazebo-ros-pkgs
sudo apt install ros-jazzy-cartographer-ros
sudo apt install ros-jazzy-xacro
```

### 2. Workspace Setup

Clone this repository into your ROS 2 workspace  ~/ros2_ws/src:

```bash
cd ~/ros2_ws/src
git clone https://github.com/C-Rohann/my_bot.git

# Build the workspace
cd ~/ros2_ws
colcon build
source install/setup.bash
```
### 3. Robot Description (URDF/Xacro)

The robot model is defined in:
```bash
/ros2_ws/src/my_bot_description/urdf/my_bot.urdf.xacro
```
###
This includes:

 1. Links & joints

 2. Gazebo plugins for motors

 3. Simulated LIDAR sensor

### 🚀 Launching the Simulation
1. Start Gazebo with the robot

```bash
ros2 launch my_bot display.launch.py
```

### 🚧 Future Work

Add the ROS 2 Navigation2 stack for autonomous navigation

Test in complex Gazebo environments

Extend to RGB-D sensor for 3D SLAM

###
📜 License

This project is licensed under the MIT License.
