#include<stdio.h>

//UNIQUE FINDING OUT IN ARRAYS

int main(){
	
	int size;
	
	printf("\nEnter the Size Of the Array\n");
	scanf("%d",&size);
	
	int array[size];
	int num;
	
	printf("\nEnter the Values In The Array\n");
	
	for(int i=0;i<size;i++){
	
	scanf("%d",&array[i]);
	
	}
	
	int max=array[0];
	for(int i=0;i<size;i++){
		num=0;
		for(int j=0;j<size;j++){
			if(array[i]==array[j]){
				num++;
			}
		}
		if(num==1){
			printf("\nUnique Number Is %d",array[i]);
		}
	}
	
	
	
	return 0;
}
