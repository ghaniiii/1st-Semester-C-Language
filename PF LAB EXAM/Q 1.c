#include<stdio.h>

int main(){
	
	int fixed;
	
	int projectprice;

	int hourlyrate;
	
	int hourlyprojects;
	
	int sumoffixedprojects = 0;
	
	int sumofhourlyprojects = 0;
	
	int numhourlyprojects = 0;
	
	printf("\nProgram For A FreeLancer Easiness\n");
	
	printf("\n________________________________________\n");
	
	printf("\nEnter the number of fixed price projects : ");
	scanf("%d",&fixed);
	
	printf("\n________________________________________\n");
	
	for(int i=1;i<=fixed;i++){
		
	printf("\nEnter the Price of project %d in Dollars : ",i);
	scanf("%d",&projectprice);
	
	sumoffixedprojects = sumoffixedprojects + projectprice ; 
		
	}
	
	printf("\n________________________________________\n");
	
	printf("\nEnter your Hourly Rate In Dollars : ");
	scanf("%d",&hourlyrate);
	
	printf("\n________________________________________\n");
	
	printf("\nEnter the number of hourly projects done : ");
	scanf("%d",&hourlyprojects);
	
	printf("\n________________________________________\n");
	
	for(int i=1;i<=hourlyprojects;i++){
		
	printf("\nEnter the number of hours worked on project %d : ",i);
	scanf("%d",&numhourlyprojects);
		
		sumofhourlyprojects = sumofhourlyprojects + numhourlyprojects;
		
	}
	
	printf("\n________________________________________\n");
	
	printf("\nIncome Earned From Fixed Priced Projects : %d$ ",sumoffixedprojects);
	printf("\nIncome Earned From Hourly Projects : %d$ ",sumofhourlyprojects*hourlyrate);
	printf("\nTotal Income Earned Till Now : %d$",sumoffixedprojects + (sumofhourlyprojects*hourlyrate));

	

	
	
	
	return 0;
}