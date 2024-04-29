# Parrot V102
## Ros2 Control - Parrot
- Tweak the angle settings for the robot in the parrot_v1_control.xacro file to match them to the real robots working envelope and working conditions

# Launch Simulated Robot
To launch the gazebo & Rviz simulation of the robot
~~~
ros2 launch parrot_v1_bringup simulation.launch.py
~~~

# Launch Real Robot
To launch the gazebo & Rviz simulation of the robot
~~~
ros2 launch parrot_v1_bringup real.launch.py
~~~

# Launch Task server to send commands to the gazebo and real robot
~~~
ros2 service send_goal
~~~
