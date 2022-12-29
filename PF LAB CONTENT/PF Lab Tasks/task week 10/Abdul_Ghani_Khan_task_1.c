//1. Write a program using nested if else that asks a user whether he/she wants
//burger. If the user enters Y or y. Then the program should further ask
//whether the user wants an add-on of fries and cold drink for 200 Rs only.
//Calculate and display the total price accordingly. Price of Burger is 500.
//Note: Validate your input. If the user enters anything other than Y, y, n or
//N. The program should display the message “Invalid Input”.


#include<stdio.h>

int main(){
	
	char burger,addon;
	int burgerprice=500,addonprice=200;
	
	printf("\nDo You Want A Burger ? \nY/N :  ");
	scanf(" %c",&burger);
	
	
	if(burger=='y' || burger=='Y'){
		
			printf("\nDo You Want An Add On Of fries And Cold Drink For Only 200Rs ? \nY/N : ");
			scanf(" %c",&addon);
		
			if(addon=='y' || addon=='Y'){
				printf("\nThank You \nYour Bill is %dRs For Burger And %dRs For Fries and Drinks Addon \nTotal Bill Is : %dRs",burgerprice,addonprice,burgerprice+addonprice);
			}
			else if(addon=='N' || addon== 'n'){
				printf("\nThank You \nYour Bill is %dRs For Burger \nTotal Bill Is : %dRs",burgerprice,burgerprice);
			}
			else{
				printf("\nNot A Valid Input");
			}
    }
	else if(burger=='n' || burger=='N'){
		printf("\nNo Problem See You Next Time");
	}	
		
	
	else{
		printf("\nNot A Valid Input");
	}
	
	    printf("\n\nThank You For Choosing Us");
	return 0;
}
