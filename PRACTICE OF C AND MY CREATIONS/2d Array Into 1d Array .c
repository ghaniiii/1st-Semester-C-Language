#include<stdio.h>

int main(){

	int rows,cols;
	
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	
	printf("Enter the Number of Columns : ");
	scanf("%d",&cols);
	
	int onedarraysize = rows*cols;
	
	int array[rows][cols];
	int onedarray[onedarraysize];
	
	int count=0;
	
	printf("Enter the elements in the 2D Array : \n");
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			scanf("%d",&array[i][j]);
		}
	}
	
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			
			onedarray[count] = array[i][j];
			
			count++;
			
		}
	}
	
	printf("Your 2D Array Has Been Successfully Transfered into the 1D Array And The Output is :- \n");
	
	for(int i=0;i<onedarraysize;i++){
		
		printf("%d ",onedarray[i]);
		
	}


return 0;
}
