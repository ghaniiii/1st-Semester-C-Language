#include<stdio.h>

int totalrevenue(int totalhours , int hourlyrate);

int main(){
	
	int totalhours;
	
	printf("Enter the Total Hours Worked : ");
	scanf("%d",&totalhours);
	
	int hourlyrate;
	
	printf("\nEnter the Hourly Rate : ");
	scanf("%d",&hourlyrate);
	
	int revenue = totalrevenue(totalhours,hourlyrate);
	
	printf("\nThe Total Revenue of The Free Lancer Is : %d $",revenue);
	
	return 0;
}

int totalrevenue(int totalhours , int hourlyrate){
	int revenue = totalhours * hourlyrate;
	
	return revenue;
}
