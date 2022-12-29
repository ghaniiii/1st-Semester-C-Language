//2. Write a program that takes 10 values from user, stores it in array and
//displays the no of even and odd numbers along with the number.

#include<stdio.h>
int main(){
	int size=10;
	int values[size];
	int even=0,odd=0;
	
	for(int i=0;i<size;i++){
		printf("Enter the Values : ");
		scanf("%d",&values[i]);
	}
	for(int i=0;i<size;i++){
		if(values[i]%2==0){
			printf("\n%d is Even ",values[i]);
			even++;
		}
	}
	for(int i=0;i<size;i++){
		if(values[i]%2!=0){
			printf("\n%d is Odd ",values[i]);
			odd++;
		}
	}
	printf("\nTotal Number Of Odds Are : %d And Total Number Of Even Are : %d",odd,even);
	return 0;
}
