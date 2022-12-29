/*Pizza Pi
Alan Pizza Palace needs a program to calculate the number of slices a pizza of any
size can be divided into. The program should perform the following steps:
A) Stores the diameter of the pizza in inches (in the function).
B) Calculate the number of slices that may be taken from a pizza of that size (task
should be performed using a function that does not accept any argument but returns
the no of slices). Each slice should have an area of 14.125 inches
C) Display a message telling the number of slices (in main).*/

#include<stdio.h>

float pizzaslices();

int main()
{
	
	int numberofslices = pizzaslices();
	
	printf("The Total Number Of Slices For Any Pizza Will Be %d ",numberofslices);
	
	return 0;
}

float pizzaslices()
{
	
	float diameter = 20.0;
	float radius = diameter/2;
	float pizzaarea = 3.14 * radius * radius;
	float slicearea = 14.125;
	float numberofslices = pizzaarea/slicearea;
	
	return numberofslices;
	
}

