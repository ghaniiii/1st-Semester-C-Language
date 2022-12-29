#include<stdio.h>
	int size1=3;
	int size2=3;
int maxin2d(int a[size1][size2] );

int main(){

	int a[3][3];
	
	
	printf("Enter the Value in the 3by3 2d Array : ");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	int max= maxin2d(a,size1,size2);
	printf("The Max Value In the 2d Array is : %d ",max);

	return 0;
}

int maxin2d(int a[size1][size2] ){
	int max=a[0][0];
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
	}
	return max;
}
