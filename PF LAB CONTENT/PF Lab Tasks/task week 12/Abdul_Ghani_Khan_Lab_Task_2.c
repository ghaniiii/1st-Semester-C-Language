#include<stdio.h>

int main(){
	int rows;
	printf("How Many Rows : ");
	scanf("%d",&rows);
	
		for(int i=1;i<=rows;i++){
			
			for(int j=rows;j>i;j--){
				printf(" ");
			}
			for(int k=1;k<=i;k++){
				printf("*");
			}
			
			
			printf("\n");
		}
	
	
	
	return 0;
}
