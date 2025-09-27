# 🤖 My ROS 2 Projects Portfolio

A collection of personal projects and packages developed using the **Robot Operating System 2 (ROS 2)** framework. This repository showcases my work in robotics, ranging from simple tutorials and simulations to complex navigation and perception tasks.

## 🌟 Overview

This folder contains several independent ROS 2 workspaces or packages. Each project is designed to demonstrate different aspects of the ROS 2 ecosystem, including:

* **Custom Nodes:** Publishers, subscribers, and service clients/servers.
* **Launch Files:** Using Python or XML to orchestrate multiple nodes.
* **Simulation:** Integration with **Gazebo** or **Rviz**.
* **Robot Navigation/Manipulation:** Specific algorithms or applications.
* **[Add your main focus here, e.g., Computer Vision, Teleoperation]**

---

## 📂 Folder Structure

This repository is a collection of several independent ROS 2 projects. Each folder listed below typically represents a self-contained ROS 2 workspace or a single main package.

```text
ros2_projects/
├──my_robot
│   ├── src/
│   ├── include/
│   ├── package.xml
│   └── CMakeLists.txt
├──my_bot
│   ├── src/
│   ├── launch/
│   ├── config/
├── README.md
└── LICENSE
```




### Key Projects Highlighted:

| Project Name | Description | Key Features | ROS 2 Distribution |
| :--- | :--- | :--- | :--- |
| **AMR With Manipulating ARM** | Inverse Kinematics solution for a 3-DOF manipulator. | Free Movement in gazebo for different operations | jazzy |


---

## 🛠 Prerequisites

Before using any of the projects, ensure you have the following installed:

* **Operating System:** Ubuntu **[e.g., 22.04 LTS]**
* **ROS 2 Distribution:** **Jazzy Jalisco.**
    * [Link to ROS 2 Installation Guide](https://docs.ros.org/en/jazzy/Releases.html)


---

## 🚀 Setup and Installation

Follow these steps to clone the repository and build the projects within your ROS 2 environment.

### 1. Clone the Repository

Navigate to your ROS 2 workspace 

```bash
cd ~/ros2_ws/src
git clone ~/ros2_ws/src
```

## 2. Install Dependencies
Before building, resolve any dependencies using rosdep:

```bash
cd ~/ros2_ws
rosdep install --from-paths src --ignore-src -r -y
```

3. Build the Workspace
Compile all packages using colcon build:

```bash
cd ~/ros2_ws
colcon build
```
## ▶️ Usage (Running a Project)
1. Source the Setup File
Always remember to source the workspace before running any executables:

```bash
source ~/ros2_ws/install/setup.bash
```
## 2. Run a Specific Project
To run a launch file for a specific project, use the following command (replacing [package_name] and [launch_file] with the actual names):

```bash
ros2 launch my_robot.urdf display.launch.xml
```

## 📝 License
This project is licensed under the MIT License-see the LICENSE file for details.

## 📧 Contact
If you have any questions, feel free to reach out:

GitHub: https://github.com/C-Rohann

Email: rohanchavan4101@gmail.com
