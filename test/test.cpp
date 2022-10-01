#include <gtest/gtest.h>
#include "Controls.hpp"
Controls A;

// Verifying compute method
TEST(FirstTest,Case1){
	
  EXPECT_EQ(A.compute_vel(-5.0,3.0),5.0);
}
// verifying compute method
TEST(SecondTest,Case2){
	EXPECT_EQ(A.compute_vel(6.0,3.0),6.0);
}
//other verify input 
TEST(ThirdTest,Case3){
	EXPECT_TRUE(A.get_input(-0.4)>0);
}

//other verify input 
TEST(FourthTest,Case4){
	EXPECT_TRUE(A.get_input(0)>0);
}