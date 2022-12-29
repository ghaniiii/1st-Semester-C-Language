//1. Write a program in which user will enter a string (without spaces). The
//string will be passed to a function which will check that the string is
//palindrome or not and display a message accordingly.

#include<stdio.h>
#include<string.h>

void palindrome(int size ,char a[size]);


int main(){
	
	int size=20;
	char a[size];
	
	printf("Enter the Characters in the Array: \n\n");
	gets(a);
	
	palindrome(size, a);

	
	return 0;
}

void palindrome(int size,char a[size]){
	

	int faalse = 0;
	
	int length = strlen(a);
	
	for(int i=0;i<length/2;i++){
		
		if(a[i]!=a[length-1-i]){
			faalse=1;
			break;
		}
		
	}
	
	if(faalse){
		printf("\nThe Input Is Not a Palindrome\n");
	}
	else{
		printf("\nThe Input Is Palindrome");
	}
	
}

