// CHALLANGE: Find and fix the Errors
// Find the errros in the same code and correct the parts needed
// Your program should run and display correct output as expected 

#include<stdio.h>
int main()
{
	
	// assigning a float value in x from y and printing it
	float y = 5.5;
	float x;
	x=y;
	printf("\nthe value of x is: %f", x);
	
	
	// seconds to hours conversion (answer must be in float value)
	float seconds=5000.0;
	float hours=seconds/3600;
	printf("\nthere are %f hours in %f seconds",hours,seconds);
	
	
	// BMI calculator, output should be in float
	float weight=80.5;
	float height=3.3;
	float BMI=weight/(height*height);
	printf("\nBMI: %f", BMI);
	return 0;
}
