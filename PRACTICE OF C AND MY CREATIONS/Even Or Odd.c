#include<stdio.h>
#include<math.h>

// Input any number and it will output if its even or odd

int a;
int b;
int a1;

int checkeven(int a){
	
	a1= a%2;
	
	return a1;
	
}


int main(){
	
	printf("\nEnter the Value Of For Which You Want To Find If it is Even Or Odd : ");
	scanf("%d",&a);
	
	checkeven(a);
	
	b = a1;
	
	if(b==0){
		
		printf("The Number Is Even");
		
	}
	
	else{
		
		printf("The Number is Odd");
		
	}
	
}
