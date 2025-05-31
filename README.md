# ARM using YOLOV8

This ROS 2-based project enables object-based grasping using a Panda robot in a Gazebo simulation, integrated with MoveIt 2 for motion planning and YOLOv8 for object detection.

## Features

- **MoveIt 2 Integration** for motion planning and execution
- **Gazebo Simulation** environment with custom controllers
- **YOLOv8**-based object detection using bounding boxes (OBB)
- **Python UI** for selecting target objects to grasp

## Technologies

- ROS 2 (Foxy/Humble)
- MoveIt 2
- Gazebo
- YOLOv8
- Python 3

## How to Run

```bash
# Terminal 1: Launch Gazebo with MoveIt2
source install/setup.bash
ros2 launch panda_moveit_config moveit_gazebo_obb.py

# Terminal 2: Start YOLOv8 OBB detection
source install/setup.bash
source /home/u3/venvs/yolov8_env/bin/activate
ros2 launch yolov8_obb yolov8_obb.launch.py

# Terminal 3: Launch the object selection UI
source install/setup.bash
cd UI
python3 bolt_selector.py
```

## Project Structure

* `src/panda_moveit_config/`: MoveIt 2 config and launch files for the Panda robot
* `UI/bolt_selector.py`: UI for object selection
* `robot.py`: D-H table and forward kinematics visualization
* `inversek.py`: Inverse kinematics visualization




