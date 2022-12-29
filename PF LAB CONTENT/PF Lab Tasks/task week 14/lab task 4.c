//Write a C Program to Perform Matrix Multiplication.
//1. The program takes two matrices and multiplies them
//2. If number of columns of matrix A is not equal to number of rows of matrix B, then
//matrices cannot be added.
//3. The program is exited.
//4. Else they are multiplied and the result is printed.
//5. In output, print the first matrix, second matrix and the resultant matrix.
//Note: When you want to print the array, pass that array to a function and the
//function will print the array.

#include<stdio.h>
void matrixprinting(int rows,int cols, int matrixprint[rows][cols]);

int main(){
	
	int rows1,rows2,col1,col2,sum;
	
	printf("Enter the Number Of Rows Of Matrix 1 : ");
	scanf("%d",&rows1);
	printf("Enter the Number Of Columns Of Matrix 1 : ");
	scanf("%d",&col1);
	printf("Enter the Number Of Rows Of Matrix 2 : ");
	scanf("%d",&rows2);
	printf("Enter the Number Of Columns Of Matrix 2 : ");
	scanf("%d",&col2);
	
	int matrix1[rows1][col1];
	int matrix2[rows2][col2];
	int multip[rows1][col2];
	
	if(col1==rows2){
		
	printf("\nEnter the Values In The Matrix 1 : \n");
	
	for(int i=0;i<rows1;i++){
		for(int j=0;j<col1;j++){
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	printf("\nEnter the Values In The Matrix 2 : \n");
	
	for(int i=0;i<rows2;i++){
		for(int j=0;j<col2;j++){
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	printf("\nMultiplication Of The Matrix 1 And Matrix 2 Is : \n");
	
	for(int i=0;i<rows1;i++){
		for(int j=0;j<col2;j++){
			sum=0;
			for(int k=0;k<col1;k++){
				sum = sum + matrix1[i][k] * matrix2[k][j];
			}
			multip[i][j]=sum;
		}
	}
	
	printf("\nSo Matrix 1 Is :\n\n");
	
	matrixprinting(rows1,col1,matrix1);

	printf("\n  X\n");
	
	printf("\nAnd Matrix 2 Is :\n\n");
	
	matrixprinting(rows2,col2,matrix2);
	
	printf("\nAnd Multiplication Of These 2 Matrices Is :\n\n");
	
	matrixprinting(rows1,col2,multip);
		
	
	}
	else{
		printf("\n*Matrices Cannot Be Multiplied*");
	}
	
	return 0;
}


void matrixprinting(int rows,int cols,int matrixprint[rows][cols]){
	matrixprint[rows][cols];
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%02d ",matrixprint[i][j]);
		}
		printf("\n");
	}
	
}
