Flash pyserial.ino onto Arduino
Make sure the right port is opened in write_to_serial.py node
colcon build the serialcomm package in a workspace
ros2 run serialcomm serialwriter_exec
ros2 topic pub /drill_commands std_msgs/String "data: 'drill'" -1
This turns pin 13 LED on, 'stop' will turn it off.
Connec the relay inputs to pin 13, and the drill will be powered by writing to drill commands topic.
To integrate with manipulator, the lbr node needs to write to that topic, that's it
