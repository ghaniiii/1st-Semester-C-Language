#include<stdio.h>

int main(){
	int n;
	
	printf("\nEnter the Size For the Array\n");
	scanf("%d",&n);
	int a[n];
	int b[n];
	
	printf("\nEnter the Values In the Array To Be Duplicated\n");
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x = n-1;
	for(int i=0;i<n;i++){
		b[i]=a[x];
		x--;
	}
	
	printf("\nThe Duplicated Array Is As Below\n");
	
	for(int i=0;i<n;i++){
		printf("\n%d",b[i]);
	}
	
	
	return 0;
}
