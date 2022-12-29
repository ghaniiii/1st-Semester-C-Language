#include<stdio.h>
int main(){
		
		int x,y;		
		int basket ;
		
		printf("Enter 1st Value : ");
		scanf("%d", &x);
		
		printf("Enter 2nd Value : ");
		scanf("%d", &y);
		
				
		
		basket = x;
		x = y ;
		y = basket ;
		
		
		printf("After swaping X is : %d \n", x);
		printf("After Swaping Y is : %d \n", y);
	
	return 0;
}
