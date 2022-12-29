/*Write a program in C that contains a function to calculate third angle of triangle.
? Declare two angles in main.
? The function should take two angles as parameters.
? The function will calculate the third angle and return it to main.
? The program should print value of third angle in main.*/

#include<stdio.h>

int thirdangle(int firstangle, int secondangle);

int main ()
{
	
	int firstangle = 30;
	int secondangle = 50;
	
	int thirdangle2 = thirdangle(firstangle,secondangle);
	
	printf("The Third Angle Is %d Degree",thirdangle2);
	
	return 0;
}

int thirdangle(int firstangle, int secondangle)
{
	
	int thirdangle1 = 180 - firstangle - secondangle;
	
	return thirdangle1;
}

