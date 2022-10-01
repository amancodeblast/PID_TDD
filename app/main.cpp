/**
 * @file main.cpp
 * @author Aman Sharma (amankrsharma3@gmail.com)
 * Driver: Aman Sharma Navigator: Sharmitha Ganesan
 * @brief Main function for the PID Controls Classs
 * @version 0.1
 * @date 2022-10-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include "Controls.hpp"
int main()
{
    Controls A;
    double target, actual,dt;
    target=5.0;
    actual=3.0;
    dt=A.get_input(0.4);
    
    cout<<A.compute_vel(target,actual);
    
}
