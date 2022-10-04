/**
 * @file test.cpp
 * @author Aman Sharma (amankrsharma3@gmail.com)
 * @brief Test cases for the Controller Class
 * @version 0.1
 * @date 2022-10-01
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <gtest/gtest.h>

#include "controls.hpp"
Controls A(1.0, 0.1, 0.3, 1.0);

/**
 * @brief Checking if the target velocity is closer to the computed velocity
 * with negative values
 *
 */
TEST(FirstTest, Case1) { EXPECT_NEAR(A.computeVel(-5.0, 3.0), -5.0, 1); }
/**
 * @brief Checking if the target velocity is closer to the computed velocity
 * with positive values
 *
 */
TEST(SecondTest, Case2) { EXPECT_NEAR(A.computeVel(7.0, 3.0), 7.0, 1); }
/**
 * @brief The test case makes sure dt is positive
 *
 */
TEST(ThirdTest, Case3) { EXPECT_GT(A.getTime(), 0); }
