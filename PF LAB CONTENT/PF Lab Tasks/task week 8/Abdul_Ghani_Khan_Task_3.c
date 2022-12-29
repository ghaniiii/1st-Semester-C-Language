/*Write a program in C that contains a function to reverse a three-digit number.
? The function should take the number as parameter.
? The function should reverse the number and print the reversed no within the
function

Hint: Use modulus %
E.g.: 123 is your integer. Output: 321*/

#include<stdio.h>

void reverse(int number);

int main()
{
	
	int three_digit_number = 123;
	reverse(three_digit_number);
	
	return 0;
}

void reverse(int number)
{
	int firstnumber = number/100;
	int remainder_thirdnumber = number%100;
	int secondnumber = remainder_thirdnumber/10;
	    remainder_thirdnumber = remainder_thirdnumber%10;
	int reversenumber = remainder_thirdnumber*100 + secondnumber*10 + firstnumber; 
	printf("The Reverse Of The Provided Number Is %03d",reversenumber);
	
}

