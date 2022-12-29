#include<stdio.h>

int main(){
	
	int size;
	
	printf("\nEnter the Array Size\n");
	scanf("%d",&size);
	
	int array[size];
	
	printf("Enter the data in the array\n");
	
	for(int i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	int target;
	printf("Enter the target : ");
	scanf("%d",&target);
	
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(array[i] + array[j] == target){
				printf("\nThe Values Are %d and %d And Are Present At Index %d and %d\n",array[i],array[j],i,j);
			}
		}
	}
	
	
	return 0;
}