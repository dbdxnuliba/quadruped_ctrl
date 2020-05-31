#include <ros/ros.h>
#include <main_helper.h>
#include "MIT_Controller.hpp"

int main(int argc, char **argv) {
  ROS_INFO("start quadruped_ctrl node");
  ros::init(argc, argv, "quadruped_ctrl");

  main_helper(argc, argv, new MIT_Controller());
  
  ros::spin();
  ROS_INFO("exit quadruped_ctrl node");
  return 0;
}