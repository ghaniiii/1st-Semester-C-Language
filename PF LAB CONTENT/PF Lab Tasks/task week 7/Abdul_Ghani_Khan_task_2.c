#include<stdio.h>

int main(){
	
	int previous_units=250;
	int present_units=350;
	int october_units = present_units-previous_units; 
	int bill = october_units*5; //1 unit = 5RS
	
	printf("The Units For October Are %d \nAnd The Bill For October Is %d ",october_units,bill);
	
	return 0;
	
}
