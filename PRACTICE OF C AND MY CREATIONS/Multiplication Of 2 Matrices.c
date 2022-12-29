#include<stdio.h>

int main(){
	int rows,columns;
	
	printf("Enter the Value of Rows : ");
	scanf("%d",&rows);
	
	printf("Enter the values of Columns : ");
	scanf("%d",&columns);
		
	int a[rows][columns];
	int b[rows][columns];
	int c[rows][columns];
	
	printf("Enter the values in the 2D Array : \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the value of second 2d array : \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			scanf("%d",&b[i][j]);
		}
	}	
	printf("\nValue of 1st 2d Array : \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	printf("\nValue of 2nd 2d Array : \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}	
	
	if(columns == rows
	)
	{
		
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<rows;j++){
			int sum = 0 ;
			for(int k=0;k<rows;k++){
				sum=sum+ a[i][k] * b[k][j];
			}
			c[i][j]=sum;
		}
		printf("\n");
	}
		
	printf("\nValue of Muliplication Matrix / 2d Array Is : \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			printf("%02d ",c[i][j]);
		}
		printf("\n");
	}	
		
	}
	else {
		printf("\nResult : \n\n");
		printf("Oops ! Not in a rule of matrix");
	}
	return 0;
}
