/**
 * @file main.cpp
 * @author Aman Sharma (amankrsharma3@gmail.com)
 * Driver: Aman Sharma Navigator: Sharmitha Ganesan
 * @author Programmer: Tanuj Thakkar (tanuj@umd.edu)
 * @brief Main function for the PID Controls Classs
 * @version 0.1
 * @date 2022-10-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <controls.hpp>

int main() {
  double Kp, Ki, Kd, dt;
  double target, actual;

  std::cout << "Enter the gain parameters of the PID controller: Kp, Ki, Kd, dt"
            << std::endl;
  cin >> Kp >> Ki >> Kd >> dt;

  std::cout << "Enter the target and actual velocities: " << std::endl;
  std::cin >> target >> actual;

  Controls c(Kp, Kd, Ki, dt);
  std::cout << "PID achieved velocity: " << c.computeVel(target, actual)
            << std::endl;

  return 0;
}
