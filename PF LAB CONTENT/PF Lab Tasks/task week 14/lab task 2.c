#include<stdio.h>

int main(){
	int rows,rightdiagonalsum=0,leftdiagonalsum=0;
	printf("Enter the Value Of Rows/Columns In the Square Matrix : ");
	scanf("%d",&rows);
	
	int array[rows][rows];
	
	printf("\n");
	
	printf("Enter the Values In the Array :-\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<rows;j++){
			printf("Enter Values in Pocket %d %d Of The Matrix : ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\n");
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<rows;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<rows;j++){
			if(i==j){
				leftdiagonalsum = leftdiagonalsum + array[i][j];
			}
			if(i+j==rows-1){
				rightdiagonalsum = rightdiagonalsum +array[i][j];
			}
			
		}
	}
	
	
	
	printf("The Sum Of Left Diagonal Elements Is : %d \n",leftdiagonalsum);
	printf("The Sum Of Right Diagonal Elements Is : %d \n",rightdiagonalsum);
	
	return 0;
}
