#include<stdio.h>

int main(){
	
	int num;
	
	printf("Enter any number to check if its even or odd : ");
	scanf("%d",&num);
	
	int *p = &num ;
	
	if(*p%2==0){
		printf("\nIts Even\n");
	}
	else{
		printf("\nIts Odd\n");
	}
	
	
	
	
	return 0;
}