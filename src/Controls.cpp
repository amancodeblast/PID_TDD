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
#include "Controls.hpp"
/**
 * @brief get inputs
 *
 * @param dt_
 * @return int
 */
int Controls::get_input(double dt_) {
  dt = dt_;
  return dt;
}
/**
 * @brief Computes the final velocity
 *
 * @param TargetSetpoint
 * @param ActualVelocity
 * @return double
 */
double Controls::compute_vel(double TargetSetpoint, double ActualVelocity) {
  double NewVelocity = 5;
  return NewVelocity;
}

