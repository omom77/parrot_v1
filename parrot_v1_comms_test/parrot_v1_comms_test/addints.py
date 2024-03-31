import rclpy
from rclpy.node import Node
from parrot_v1_msgs import AddTwoInts

class SimpleServiceServer(Node):
    def __init_(self):
        super().__init__("simple_service_server")

        self.service = self.create_service(AddTwoInts, "add_two_ints", self.serviceCallBack)
        self.get_logger().info("service add two ints Readdy")

    def serviceCallBack(self, req, res):
        self.get_logger().info("new msg recieved a: %d, b: %d" % (req.a, req.b))
        res.sum = req.a + req.b
        self.get_logger().info("Returning sum: %d" %res.sum)
        return res
    
def main():
    rclpy.init()
    simple_service_server = SimpleServiceServer
    rclpy.spin(simple_service_server)
    simple_service_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()