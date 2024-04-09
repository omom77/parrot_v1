#!/usr/bin/python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from parrot_v1_msgs.action import Fibonacci
import time

class SimpleActionServer(Node):
    def __init__(self):
        super().__init__("simple_action_server")

        # Creating and managing communications of a server
        #self.action_server = ActionServer(self, msg_interface(defined in parrot_v1_msgs), "Server_Name", name of function server will execute)
        self.action_server = ActionServer(self, Fibonacci, "fibonacci", self.goalCallback)
        self.get_logger().info("starting the Server")

    def goalCallback(self, goal_handle):
        self.get_logger().info("Recieved goal Request with order %d" %goal_handle.request.order)
        feedback_msg = Fibonacci.Feedback()
        feedback_msg.partial_sequence = [0, 1]

        for i in range(1, goal_handle.request.order):
            feedback_msg.partial_sequence.append(feedback_msg.partial_sequence[i] + feedback_msg.partial_sequence[i-1])
            self.get_logger().info("Feedback: {0}".format(feedback_msg.partial_sequence))
            # goal_handle - Send feedback msgs to the client
            goal_handle.publish_feedback(feedback_msg)
            # Pause the execution of the loop for one second - due to the above taking some time
            time.sleep(1)

        goal_handle.succeed()
        result = Fibonacci.Result()
        result.sequence = feedback_msg.partial_sequence
        return result
        
def main():
    rclpy.init()
    simple_action_server = SimpleActionServer()
    rclpy.spin(simple_action_server)
    simple_action_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
                
