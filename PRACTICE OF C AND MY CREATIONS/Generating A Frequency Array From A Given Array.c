#include<stdio.h>

int main(){
	
	int size;
	printf("\nEnter the Size Of the Array\n");
	scanf("%d",&size);
	int array[size];
	
	printf("\nEnter the Values In Array\n");
	
	for(int i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	int max=0;
	for(int i=0;i<size;i++){
		if(max<array[i]){
			max=array[i];
		}
	}
	
	int frequency[max+1];
	int x=0;
	int count=0;
	while(x<(max+1)){
		count=0;
		for(int i=0;i<size;i++){
				if(x==array[i]){
					count++;
				}
			
		}
		frequency[x]=count;
		x++;
	}
	for(int i=0;i<(max+1);i++){
		printf("%d ",frequency[i]);
	}
	
	
	return 0;
}
