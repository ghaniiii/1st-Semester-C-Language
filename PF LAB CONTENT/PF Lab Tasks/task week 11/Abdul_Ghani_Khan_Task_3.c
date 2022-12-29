//Write a program that prints natural no’s from 1 to Any Number and according to user
//input limit the no of elements in a row.

#include<stdio.h>
int main(){
	
	int rows;
	int digit;
	printf("\nEnter Any Number That You Want To Print Till That Number, From 1 : "); //Write Any Number Here To Print Till That Number This is
																					 //An Extra Feature That Ive Put As The Task Had THe Number 
																					 //Limited To 50. But It Is Recommended to Put 50. 
																					 
	scanf("%d",&digit); 
	printf("\nNow How Many Elements Do You Want To Print In A Row ?  ");
	scanf("%d",&rows);
	int num=1;
	
	int i=1;
	while(num<=digit){
		for(int i=1;i<=rows;i++){
			if(num>digit){
				break;}
				printf("%03d   ",num);
				num++;
			
		}
		printf("\n");
}
return 0;
}
