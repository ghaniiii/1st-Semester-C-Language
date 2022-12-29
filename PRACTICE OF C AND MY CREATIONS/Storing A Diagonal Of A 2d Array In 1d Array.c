#include<stdio.h>

int main(){
	
	int size;
	
	printf("Enter the Size Of The 2d Array Rows And Columns Will Be The Same : ");
	scanf("%d",&size);
	
	int a[size][size];
	int b[size];
	int sum;
	
	printf("\nEnter the Values in The 2d Array : \n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe 2d Array That You Just Entered Is \n");
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%d ",a[i][j]);		
		}
	printf("\n");
	}
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(i==j){
				b[i]=a[i][j];
			}
		}
	}
	
	printf("\n_______________________________________________\n");
	
	printf("\nThe Diagonal Is As Below And Stored In A 1d Array\n");
	
	for(int i=0;i<size;i++){
		printf("%d ",b[i]);
	}
	
	return 0;
}
