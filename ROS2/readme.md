# 🤖 Project Title: Autonomous Mobile Robot with Manipulator



A ROS 2 package/workspace focused on **robot simulation, visualization, and control**. This project integrates a custom **URDF** model, deploys it in a **Gazebo** simulation environment with custom **plugins**, and enables real-time interaction and control via **ROS 2** using **ros2\_control** and visualization in **RViz**.

---

## 🚀 Key Features

* **Custom URDF Design**: A complete and accurate kinematic and visual description of the **my_robot**.
* **Gazebo Simulation**: Realistic simulation environment including world files, sensor definitions, and physics configurations.
* **Custom Gazebo Plugins**: Extend the simulation with custom logic for **Visualization using Camera**.
* **ROS 2 Control Integration (`ros2_control`)**: Standardized hardware interface for robust and flexible joint control using various controllers (e.g., position, velocity, effort).
* **RViz Visualization**: Detailed and dynamic visualization of the robot's state, sensor data, and planned paths.
* **Modular ROS 2 Package Structure**: Organized for easy expansion and integration into larger systems.

---

## 🛠️ Prerequisites

This project requires a working installation of **ROS 2 [Humble/Iron/Rolling]** and the necessary tools.

* **Operating System**: Ubuntu [22.04/20.04] (Recommended)
* **ROS 2 Distribution**: Jazzy
* **Gazebo Simulator**: Gazebo Hormonic
* **Dependencies**:
    * `ros-dev-tools`
    * `ros-[distro]-gazebo-ros2-control`
    * `ros-[distro]-xacro`
    * `ros-[distro]-rviz2`
    * **[Any other specific dependencies]**

---

## 📂 Installation

Follow these steps to set up the workspace and build the packages.

1.  **Create a ROS 2 Workspace:**
    ```bash
    mkdir -p ~/ros2_ws/src
    cd ~/ros2_ws/src
    ```

2.  **Clone the Repository:**
    ```bash
    git clone [https:https://github.com/C-Rohann/Portfolio/edit/main/ROS2)]
    ```

3.  **Install Dependencies:**
    ```bash
    sudo apt update
    rosdep install --from-paths src --ignore-src -r -y
    ```

4.  **Build the Workspace:**
    ```bash
    cd ~/ros2_ws
    colcon build
    ```

5.  **Source the Setup File:**
    ```bash
    source install/setup.bash
    ```

---

## ⚙️ Usage and Execution

### 1. Launch the Gazebo Simulation

This launch file will start **Gazebo**, load the robot's **URDF**, and spawn the robot in the defined world.

```bash
ros2 launch my_robot.urdf gazebo_sim.launch.py

