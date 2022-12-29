#include<stdio.h>

void upperornot(int size, int array[size][size]);

int main()
{
	
	printf("\nProgram For Checking If A Square Matrix Is Upper Triangular Or Not\n");
	
	printf("\n________________________________________\n");
	
	int size;
	printf("\nEnter the Dimensions For The Square Matrix : ");
	scanf("%d",&size);
	
	int array[size][size];
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("\nEnter the Value At Index : %d%d : ",i,j),
			scanf("%d",&array[i][j]);
		}
	}

	upperornot(size,array);
	
	
}

void upperornot(int size, int array[size][size]){
	
	array[size][size];
		int count=0;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(j<i){
				if(array[i][j]!=0){
					count++;
				}
			}
		}
	}
	
	printf("\nThe Triangle You Entered Is :-\n\n");
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%02d ",array[i][j]);
		}
		printf("\n");
	}
	
	printf("\n________________________________________\n");
	
	if(count==0){
		printf("\nIt Is An Upper Triangular Matrix\n");
	}
	else{
		printf("\nIt Is Not An Upper Triangular Matrix\n");
	}
	
}