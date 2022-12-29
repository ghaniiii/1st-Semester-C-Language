#include<stdio.h>

int main(){
	int rows;
	printf("Enter the Num Of Rows : ");
	scanf("%d",&rows);
	int num=rows;
	for(int i=1;i<=rows;i++){
		
		for(int j=rows;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	
	return 0;
}
