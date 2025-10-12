# Simple Pick and Place (PnP) Operation in FANUC ROBOGUIDE

## 🤖 Overview

This project simulates a **basic, stationary Pick and Place (PnP)** application using a **FANUC industrial robot** in the **ROBOGUIDE** environment. The robot performs a simple transfer of a part from a **fixed pickup location** to a **fixed drop-off (palletizing) location**.

The simulation utilizes:
* A **FANUC Articulated Robot** (as seen in the video).
* A **Multi-Suction Cup Gripper** (EOAT).
* A **Fixed Pickup Station** (simulated on the conveyor table).
* A **Fixed Drop-off Pallet**.

## 🎥 Simulation Demonstration

The following video demonstrates the core Pick and Place cycle: approaching the pickup point, grasping the part, moving through a clear path, and releasing the part onto the pallet.

**[Watch the PnP Simulation Video](PNP/FanucRoboGuide_PNP.mp4)**

---
## ⚙️ Hardware and Software Configuration

| Component | Model/Setting | Notes |
| :--- | :--- | :--- |
| **Robot** | FANUC **(Model as seen in the video - e.g., LR Mate, M-10iD)** | General purpose, articulated robot. |
| **Controller** | **R-30iB Plus** (Simulated) | Standard FANUC controller. |
| **End-of-Arm Tooling (EOAT)** | **Multi-Suction Vacuum Gripper** | Used for securely grasping the rectangular part. |
| **PnP Configuration** | **Stationary** | Both pick and place points are taught as fixed positions. |

---

## 💻 Program Logic (KAREL/TP)

The robot's **Teaching Pendant (TP)** program, typically named `MAIN_PNP`, follows a standard four-point move sequence to ensure safe and efficient part transfer.

### Main Cycle Steps:

1.  **Home Position:** Robot waits at a safe home position.
2.  **Approach Pick (P[1]):** Moves to a point safely above the pickup location.
3.  **Pick Point (P[2]):** Moves down to the surface of the part.
    * **Action:** Activate Gripper Output (e.g., `DO[1] = ON`).
4.  **Depart Pick (P[3]):** Moves straight up to clear the pick area.
5.  **Approach Place (P[4]):** Moves to a point safely above the place (pallet) location.
6.  **Place Point (P[5]):** Moves down to the drop-off surface.
    * **Action:** Deactivate Gripper Output (e.g., `DO[1] = OFF`).
7.  **Depart Place (P[6]):** Moves straight up to clear the placed part.
8.  **Repeat:** Jumps back to step 1 or 2 to continue the cycle.


## 🏃 Running the Simulation

1.  **Load Cell:** Open the `.VCM` file in FANUC ROBOGUIDE.
2.  **Select Program:** Ensure `MAIN_PNP` is selected on the virtual Teach Pendant.
3.  **Operation Mode:** Set the mode to **AUTO**.
4.  **Start:** Press the **Cycle Start** button to begin the PnP loop.

---

## ⚠️ Notes

* **Obstacle Avoidance:** All motion points (P[1] through P[6]) are critical and must be verified to have adequate clearance to prevent collisions.
* **Speed:** The speed settings for the linear moves (`L` instructions) are optimized for stability, but can be adjusted for cycle time improvement.
