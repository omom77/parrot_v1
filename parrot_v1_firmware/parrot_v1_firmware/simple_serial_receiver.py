#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial

# Recieves values from Arduino & Publishes them to the ROS2 Terminal

class SimpleSerialReciever(Node):

    def __init__(self):
        super().__init__("simple_serial_publisher")

        self.declare_parameter("port", "dev/ttyUSB0")
        self.declare_parameter("baud_rate", 115200)

        self.port_ = self.get_parameter("port").value
        self.baud_rate_ = self.get_parameter("baud_rate").value

        self.pub_ = self.create_publisher(String, "serial_receiver", 10)
        self.frequency_ = 0.01      # 100Hz frequency

        # Contructor of the below class requries 2 inputs - 1.Arduino port No 2.baud rate
        self.arduino_ = serial.Serial(port=self.port_, baudrate=self.baud_rate_, timeout=0.1)  

        self.get_logger().info("Publishing at %d Hz" % self.frequency_)

        # Call the timerCallback Function
        self.timer_ = self.create_timer(self.frequency_, self.timerCallback)

    def timerCallback(self):
        # Verify ros2 node is running and in nexecution & serial comms to arduino still open 
        if rclpy.ok() and self.arduino_.is_open:
            data = self.arduino_.readline()
            try:
                data.decode("utf-8")
            except:
                return
            
            msg = String()
            msg.data = str(data)
            self.pub_.publish(msg)

def main():
    rclpy.init()

    simple_serial_reciever = SimpleSerialReciever()
    rclpy.spin(simple_serial_reciever)
    
    simple_serial_reciever.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()