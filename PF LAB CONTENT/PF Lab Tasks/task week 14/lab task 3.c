#include<stdio.h>

int main(){
	
	int years,quarters=4;
	int yearcount=1;
	int quartercount;
	int totalmax=0;
	int yearlyrevenue;
	int quartermax=0;
	int yearlymax=0;
	
	
	printf("\nEnter the Years : ");
	scanf("%d",&years);
//	printf("\nEnter the Quarters : ");
//	scanf("%d",&quarters);
	
	
	int array[years][quarters];
	
	for(int i=0;i<years;i++){
		
		printf("\nYear %d",yearcount);
		quartercount=1;
		
		
		for(int j=0;j<quarters;j++){
			printf("\nEnter the Sales For Quarter : %d\n",quartercount);
			scanf("%d",&array[i][j]);
	
		quartercount++;
		}
		
		yearcount++;
	}
	


	
	for(int i=0;i<years;i++){
		yearcount=1;
		yearlyrevenue=0;
		
		for(int j=0;j<quarters;j++){
			
			yearlyrevenue=yearlyrevenue + array[i][j];
			

			
			if(totalmax<array[i][j]){
			totalmax=array[i][j];
			yearlymax=i+1;
			quartermax=j+1;
			}
			
		}
		printf("\nYear : %d | Revenue : %d",yearcount,yearlyrevenue);
		yearcount++;
		

	}
	
	printf("\n\nThe Max Sales Are : %d In Year %d And Quarter %d ",totalmax,yearlymax,quartermax);
	
	return 0;
}
