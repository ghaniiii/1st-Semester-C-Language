#include<stdio.h>
#include<math.h>

// Programme For Any Worker To Enter His ID Find Enter His Work Hours and His Salary Will Be Given By This Programme

int main(){
	
	int a;
	int b;
	int c;
	int d;
	
	printf("Enter Your ID : ");
	
	scanf("%d",&a);
	
	int again = 1;
	
	while(again==1){
	
	if(a<=99999){
		
		printf("ID IS VALID");
		
		
		printf("Enter Your Work Hours : ");
		scanf("%d",&b);
		c=20;
		d=b*c;
		
		printf("Your Salary Is : %d",d);
		again = 0;
		
	}
	else{
		printf("ID IS INVALID");
		printf("\nDo You Want to Enter the ID again ?? For Yes Type 1 For No Type 0");
		scanf("%d",&again);
	}
}
	return 0;
}
