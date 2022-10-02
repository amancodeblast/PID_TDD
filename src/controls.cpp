/**
 * @file Controls.hpp
 * @author Aman Sharma (amankrsharma3@gmail.com)
 * Driver: Aman Sharma Navigator: Sharmitha Ganesan
 * @brief Controls Calss declaration
 * @version 0.1
 * @date 2022-10-01
 *
 * @copyright Copyright (c) 2022
 *
 */
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
 * @param dt_
 * @return int
 */
double Controls::getTime() {
  dt_ = -1;
  return dt_;
}
/**
 * @brief Computes the final velocity
 *
 * @param TargetSetpoint
 * @param ActualVelocity
 * @return double
 */
double Controls::computeVel(double TargetSetpoint, double ActualVelocity) {
  double NewVelocity = 5;
  return NewVelocity;
}