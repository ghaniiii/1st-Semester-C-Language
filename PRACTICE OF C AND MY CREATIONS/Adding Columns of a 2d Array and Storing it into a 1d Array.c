#include<stdio.h>

int main(){
	int size=5;
	int a[size][size];
	int sum[size];
	int sum1=0;
	
	printf("\nEnter the 2d Array Values : ");
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	for(int i=0;i<size;i++){
		sum1=0;
		for(int j=0;j<size;j++){
			sum1=sum1+a[j][i];
		}
		sum[i]=sum1;
	}
	
	printf("The Sum Of The Columns Is : ");
	for(int i=0;i<size;i++){
		printf("%d ",sum[i]);
	}
	
	return 0;
}
