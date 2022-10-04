/**
 * @file Controls.hpp
 * @author Aman Sharma (amankrsharma3@gmail.com)
 * Driver: Aman Sharma Navigator: Sharmitha Ganesan
 * @author Programmer: Tanuj Thakkar (tanuj@umd.edu)
 * @brief Controls Calss declaration
 * @version 0.1
 * @date 2022-10-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <cmath>
#include "controls.hpp"

Controls::Controls(double Kp, double Kd, double Ki, double dt) {
  Kp_ = Kp;
  Kd_ = Kd;
  Ki_ = Ki;
  dt_ = dt;
}

/**
 * @brief get inputs
 *
 * @return int
 */
double Controls::getTime() { return dt_; }

/**
 * @brief Computes the final velocity
 *
 * @param targetSetpoint
 * @param actualVelocity
 * @return double
 */
double Controls::computeVel(double targetSetpoint, double actualVelocity) {
  double prevError = 0;
  double totalError = 0;
  double tolerance = 0.1;

  double pid;
  double newVelocity = actualVelocity;
  double currentError = targetSetpoint - newVelocity;
  while (tolerance < std::abs(currentError)) {
    totalError += currentError * dt_;
    pid = (Kp_ * currentError) + (Ki_ * totalError) +
          (Kd_ * (currentError - prevError) / dt_);
    prevError = currentError;
    newVelocity = newVelocity + pid;
    currentError = targetSetpoint - newVelocity;
  }

  return newVelocity;
}
