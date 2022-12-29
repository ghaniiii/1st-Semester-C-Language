//Task 1:
//Write a program that reads A integer from user and outputs whether the number is
//even or odd using if else.
//Sample Output:
//Enter an integer: 5
//5 is an odd number
//OR
//Enter an integer: 12
//12 is an even number

#include<stdio.h>

int main(){
	int number;
	printf("Write Any Number : ");
	scanf("%d",&number);

			if(number%2==0){
				printf("%d Is An Even Number",number);
			}
			else{
				printf("%d Is An Odd Number",number);
			}
			
	return 0;
}
