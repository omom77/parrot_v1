cmake_minimum_required(VERSION 3.8)
project(parrot_v1_bringup)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# ament_python_install_package(${PROJECT_NAME})
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)

# ament_python_install_package(${PROJECT_NAME})

# find dependencies
find_package(ament_cmake REQUIRED)

install(DIRECTORY
  launch worlds
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
