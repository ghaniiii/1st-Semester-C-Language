#include<stdio.h>

int main(){
	
	int size;
	
	printf("\nEnter the Array Size\n");
	scanf("%d",&size);
	
	int array[size];
	
	printf("Enter the values into the array\n");
	
	for(int i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(array[i] == array[j]){
				array[i] = 0;
			}
		}
	}
	
	printf("The Array After removing the duplicates is \n");
	int count =0;
	for(int i=0;i<size;i++){
		printf("%d ",array[i]);
		if(array[i] != 0){
			count++;
		}
	}
	
	int array2[count];
	
	int x=0;
	for(int i=0;i<size;i++){
		if(array[i] != 0){
			array2[x] = array[i];
			x++;
		}
		
	}
	
	printf("\nThe Array is \n\n");
	
	for(int i=0;i<count;i++){
		printf("%d ",array2[i]);
	}
	
	return 0;
}