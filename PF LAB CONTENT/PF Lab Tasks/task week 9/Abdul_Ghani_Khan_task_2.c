//Task 2:
//Write a program that reads two integers from user and outputs the largest one using
//if else.
//Sample Output:
//Enter first integer x: 5
//
//Enter second integer y: 10
//Second integer 10 is greater than first integer 5
//

#include<stdio.h>

int main(){
	int firstint,secondint;
	
	printf("Enter The First Integer : ");
	scanf("%d",&firstint);
	
	printf("Enter The Second Integer : ");
	scanf("%d",&secondint);
	
					if(firstint>secondint){
						printf("First Integer %d Is Greater Than Second Integer %d ",firstint,secondint);
					}
						else if (secondint>firstint) {
							printf("Second Integer %d Is Greater Than First Integer %d",secondint,firstint);
						}
					else{
						printf("Fitst Integer %d and Second Integer %d Are Equal",firstint,secondint);
					}
	return 0;
}
