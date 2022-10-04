/**
 * @file controls.hpp
 * @author Aman Sharma (amankrsharma3@gmail.com)
 * @brief Header files for Control class declaration
 * @version 0.1
 * @date 2022-10-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief Control class has two methods, compute_vel and input_dt
 *
 */
class Controls {
 public:
  Controls(double Kp, double Kd, double Ki, double dt);
  double getTime();

  double computeVel(double targetSetpoint, double actualVelocity);

 private:
  double Kp_, Ki_, Kd_, dt_;
};
