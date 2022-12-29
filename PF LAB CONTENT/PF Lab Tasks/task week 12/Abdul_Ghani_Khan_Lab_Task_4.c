#include<stdio.h>

int main(){
	int rows;
	printf("Enter the Num Of Rows : ");
	scanf("%d",&rows);
	char a;
	printf("Enter the Char : ");
	scanf(" %c",&a);
	
	
	int num=rows;
	for(int i=1;i<=rows;i++){
		
		for(int j=rows;j>=i;j--){
			printf("%c ",a);
		}
		printf("\n");
	}
	
	
	return 0;
}
