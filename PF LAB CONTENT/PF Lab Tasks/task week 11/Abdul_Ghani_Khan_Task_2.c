//Write a program that takes two numbers from the user and displays all
//prime numbers between them.

#include<stdio.h>
#include<stdbool.h>
void prime(int firstnum);

int main(){
	
	int firstnum,secondnum;
	
		printf("Enter The First Number : ");
		scanf("%d",&firstnum);
		printf("Enter The Second Number : ");
		scanf("\n%d",&secondnum);
	
		printf("The Prime Numbers Between %d And %d Are : ",firstnum,secondnum);
	
		for(firstnum;firstnum<secondnum;firstnum++)
			{
				prime(firstnum);
			}
			return 0;
		}
	
void prime(int firstnum){
		bool prime=true;
			for(int i=2;i<firstnum;i++){
				if(firstnum%i==0){
			
					prime=false;
					break;
				}
		
		
	}
	if(prime==true){
		printf("%d ", firstnum);
	}
	

	
	
	
	
	
}
