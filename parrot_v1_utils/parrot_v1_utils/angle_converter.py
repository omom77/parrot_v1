#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from parrot_v1_msgs.srv import EulerToQuaternion, QuaternionToEuler
from tf_transformations import quaternion_from_euler, euler_from_quaternion

class AnglesConverter(Node):

    def __init__(self):
        super().__init__("angle_conversion_service_server")

        # Create the euler to quaternion conversion service
        self.euler_to_quaternion_ = self.create_service(EulerToQuaternion, "euler_to_quaternion", self.EulerToQuaternionCallback)
        
        # Create the quaternion to euler conversion service
        self.quaternion_to_euler_ = self.create_service(QuaternionToEuler, "quaternion_to_euler", self.QuaternionToEulerCallback)
        self.get_logger().info("Angle Conversion Services Initialized")


    def EulerToQuaternionCallback(self, req, res):
        self.get_logger().info("Request to convert euler anglers roll: %f, pitch: %f, yaw: %f, to quaternion" 
                               % (req.roll, req.pitch, req.yaw))
        (res.x, res.y, res.z, res.w) = quaternion_from_euler(req.roll, req.pitch, req.yaw)
        self.get_logger().info("Corresponding Quaternion x: %f, y: %f, z:%f, w: %f" 
                               % (res.x, res.y, res.z, res.w))
        return res

    def QuaternionToEulerCallback(self, req, res):
        self.get_logger().info("Request to convert quaternion x: %f, y: %f, z:%f, w: %f, to euler" 
                               % (req.x, req.y, req.z, req.w))  
        (res.roll, res.pitch, res.yaw) = euler_from_quaternion([req.x, req.y, req.z, req.w])
        self.get_logger().info("Corresponding Euler Angles Roll: %f Pitch: %f Yaw: %f" % (res.roll, res.pitch, res.yaw))
        return res


def main():
    rclpy.init()

    angles_converter = AnglesConverter()
    rclpy.spin(angles_converter)
    
    angles_converter.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()