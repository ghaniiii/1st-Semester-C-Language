#include<stdio.h>

int main(){
	int num;
	printf("Enter A No : ");
	scanf("%d",&num);
	
	
	
	int sum=0;
	int j=1;
	for(int i=1;i<=num;i++){
		int fact=1;
			for(j=1;j<=i;j++){
				fact=fact*j;
				
			}
			sum=sum+fact;
			printf("%d! = %d\n",i,fact);
	}
			printf("\n");
			printf("Sum Is : %d",sum);
	
	
	
	return 0;
}
