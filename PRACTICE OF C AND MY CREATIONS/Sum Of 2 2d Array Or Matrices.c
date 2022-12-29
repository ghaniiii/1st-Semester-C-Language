#include<stdio.h>

int main(){
	int size;
	printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________\n");
	printf("\nKeeping It Simple For Anyone So Its A Square Matrices Both Of the Array You Can Change That IF You Want to Find Anything Else By Doing Small CHanges TO the Code Or Contact Me Ill Do IT For Ya\n");
	printf("\n____________________________________________________________________________________________________________________________________________________________________________________________________\n");	
	printf("Enter the Size Of the 2d Array");
	scanf("%d",&size);
	int a[size][size];
	int b[size][size];
	int sum[size][size];
	
printf("\nEnter the values in the 1st 2D array : ");	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&a[i][j]);
		}
	}
printf("\nEnter the values in the 2nd 2D array : ");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			
				sum[i][j] = a[i][j] + b[i][j];
			
		}
	}
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%02d ",sum[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
