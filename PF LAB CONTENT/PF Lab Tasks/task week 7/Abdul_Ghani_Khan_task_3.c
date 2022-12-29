#include<stdio.h>

int main(){
	
	float meal_price = 100;
	
	float tax = 4.75/100 * meal_price ;
	
	float meal_with_tax = meal_price + tax;
	
	float tip = 10.0/100 * meal_with_tax;
	
	float total_bill = meal_with_tax + tip;
	
	printf("The Original Meal Price is %0.2f ,\nthe Tax amount is %0.2f ,\nthe tip amount is %0.2f ,\nSo the Total Bill inlcuding meal price ,tax and tip is %0.2f . ",
	       meal_price,tax,tip,total_bill);
		   
	return 0;	    
	
}
