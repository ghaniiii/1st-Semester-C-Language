#include<stdio.h>

void checker(int firstnum, int secondnum);

int main(){
	
	printf("\nProgram For Checking If A Pair Of Numbers Is Friendly Or Not\n");
	
	printf("\n________________________________________\n");
	
	int firstnum;
	int secondnum;
	
	
	
	printf("\nEnter the First Number : ");
	scanf("%d",&firstnum);
	
	printf("\nEnter the Second Number : ");
	scanf("%d",&secondnum);
	
	checker(firstnum,secondnum);
	

	
	
	return 0;
}

void checker(int firstnum,int secondnum){
	
	int sum=0;
	int sum1=0;
	
		sum=0;	
	
	for(int i=1;i<=firstnum;i++){
		if(firstnum%i==0){
			
			sum = sum + i ;
			
		}
	}
	
	sum1=0;
	
	for(int i=1;i<=secondnum;i++){
		if(secondnum%i==0){
			
			sum1 = sum1 + i ;
			
		}
	}
	
	
	printf("\n________________________________________\n");
	
	if(((float)sum/firstnum)==((float)sum1/secondnum)){
		printf("YESS!! The Numbers %d And %d Are Friendly Pairs",firstnum,secondnum);
	}
	else{
		printf("NOOO!! The Numbers %d And %d Are Not Friendly Pairs",firstnum,secondnum);
	}
	
	

}