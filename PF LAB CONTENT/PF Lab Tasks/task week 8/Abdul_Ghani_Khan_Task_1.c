//Write a program that converts Celsius to Fahrenheit through a function. Your
//function should accept one argument and prints the results within the function.
//Formula: F=9/5C+32

#include<stdio.h>


void fehrenheit(float celcius);

int main()
{
	
	float Celcius = 37;
	fehrenheit(Celcius);
	
	return 0;
}

void fehrenheit(float celcius)
{
	
	float fehrenheit1 = ((celcius)*(9.0/5)+32);
	printf("The Temperature in Fehrenheit Is %0.2f",fehrenheit1);
	
	
}

