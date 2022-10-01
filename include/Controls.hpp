/**
 * @brief header file 
 * 
 */
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
/**
 * @brief Control class has two methods, compute_vel and input_dt
 * 
 */
class Controls{
    private:
    double TargetSetpoint, ActualVelocity, Kp, Ki, Kd, dt;
    
    public:
    int get_input(double dt_);
      
    double compute_vel(double TargetSetpoint, double ActualVelocity);
    
};