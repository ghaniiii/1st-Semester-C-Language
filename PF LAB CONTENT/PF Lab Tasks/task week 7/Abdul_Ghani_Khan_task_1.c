#include<stdio.h>
int main (){
	
	int original_price = 100;
	float profit = 20.0/100*original_price;
	printf("\nThe Profit On Original Price %d Is %0.2f",original_price,profit);
	float selling_price = original_price + profit;
	
	printf("\nThe Selling Price Is %0.2f",selling_price);
	return 0;
}
