//Write a C Program to Find the Transpose of a Matrix.
//The program takes a matrix and prints the transpose of the matrix. In a transpose matrix,
//rows become columns and vice versa. Your program should find the transpose for matrix
//of any dimensions. See the screenshot below and your output and formatting must be like
//the following. Proper and user-friendly!

#include<stdio.h>

int main(){
	
	int rows,cols;
	
	printf("Enter the Value Of Rows : ");
	scanf("%d",&rows);
	
	printf("Enter the Value Of Columns : ");
	scanf("%d",&cols);

	int array[rows][cols];
	
	printf("Enter the Values In the Matrix Now : \n");
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("The Matrix Is :- \n");
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	printf("The Matrix's Transpose Is :-\n");
	
	for(int i=0;i<cols;i++){
		for(int j=0;j<rows;j++){
			printf("%d ",array[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
