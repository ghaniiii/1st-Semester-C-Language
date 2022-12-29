

#include<stdio.h>

int main(){
	
	int row,col;
	int sum=0;
	
	printf("\nProgram For Printing The Borders Of A Matrix And Finding Its Sum\n");
	
	printf("\n________________________________________\n");
	
	printf("\nEnter the Row Of the Matrix : ");
	scanf("%d",&row);
	
	printf("\nEnter the Column OF the Matrix : ");
	scanf("%d",&col);
	
	int array[row][col];
	printf("\nEnter the Values In The Matrix \n");
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&array[i][j]);
		}
	}
	printf("\n\nThe Boundary Matrix Is :- \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i==0 || j==0 || i==row-1 || j==col-1 ){
				printf(" %d",array[i][j]);
				sum = sum + array[i][j];
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n\nSum Of The Boundary Is : %d \n",sum);
	
	
	return 0;
}
