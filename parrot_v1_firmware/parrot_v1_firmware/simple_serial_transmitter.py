#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial

class SimpleSerialTransmitter(Node):

    def __init__(self):
        super().__init__("simple_serial_transmitter")

        self.declare_parameter("port", "dev/ttyUSB0")
        self.declare_parameter("baud_rate", 115200)

        self.port_ = self.get_parameter("port").value
        self.baud_rate_ = self.get_parameter("baud_rate").value

        self.sub_ = self.create_subscription(String, "serial_transmitter", self.msgCallback, 10)
        # self.sub_

        # Contructor of the below class requries 2 inputs - 1.Arduino port No 2.baud rate
        self.arduino_ = serial.Serial(port=self.port_, baudrate=self.baud_rate_, timeout=0.1)

    def msgCallback(self, msg):
        self.get_logger().info("New Message recieved, publishing on serial: %s" % self.arduino_.name)
        self.arduino_.write(msg.data.encode("utf-8"))


def main():
    rclpy.init()

    simple_publisher = SimpleSerialTransmitter()
    rclpy.spin(simple_publisher)
    
    simple_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()