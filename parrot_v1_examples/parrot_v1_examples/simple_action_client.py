#!/usr/bin/python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from parrot_v1_msgs.action import Fibonacci
import time

class SimpleActionClient(Node):
    def __init__(self):
        super().__init__("simple_action_client")
        self.action_client = ActionClient(self, Fibonacci, "fibonacci")

        # verify the action server is up and running
        # below function blocks the execution of the client 
        # until the server that is called fibonacci and uses the fibonacci interface
        self.action_client.wait_for_server()
        # Functions after this command mean that the afformentioned server is up and running

        self.goal = Fibonacci.Goal()
        self.goal.order = 10
        # fn that is to execute once a feedback function is recieved by client ( feedbac_callback )
        # goal async recieves future vairable
        # future - mechanism to access the result of async operation
        self.future = self.action_client.send_goal_async(self.goal, feedback_callback=self.feedbackCallback)
        # when server is done, the client gets notified the server execution has completed and execute the response.callback funtion
        self.future.add_done_callback(self.responseCallback)

    def responseCallback(self, future):
        # store result of future in a variable
        goal_handle = future.result()
        # check if the goal sent by the action client is accepted by the action server
        if not goal_handle.accepted:
            self.get_logger().info("Goal Rejected :(")
            return
        self.get_logger().info("Goal Accepted :)")
        # get result of action server execution
        self.future = goal_handle.get_result_async()
        self.future.add_done_callback(self.resultCallback)

    def resultCallback(self, future):
        result = future.result().result
        self.get_logger().info("Result: {0}".format(result.sequence))
        rclpy.shutdown()

    def feedbackCallback(self, feedback_msg):
        self.get_logger().info("Recieved Feedback: {0}".format(feedback_msg.feedback.partial_sequence))

def main():
    rclpy.init()
    simple_action_client = SimpleActionClient()
    rclpy.spin(simple_action_client)
    # simple_action_client.destroy_node()

if __name__ == '__main__':
    main()