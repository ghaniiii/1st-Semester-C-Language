#include<stdio.h>

int main(){
	int n = 10;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}	
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			if(a[i]==b[j]){
				printf("\nDuplicate : %d",a[i]);
				
			}

		}
		
	}
	
	
	return 0;
}
