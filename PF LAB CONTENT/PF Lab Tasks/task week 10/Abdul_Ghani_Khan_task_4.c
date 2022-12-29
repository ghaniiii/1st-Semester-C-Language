//4. The TCS Shipping Company charges the following rates:
//
//Write a program that asks for the weight of the package and the distance it
//is to be shipped, and then displays the charges. Input Validation: Do not
//accept values of 0 or less for the weight of the package. Do not accept
//weights of more than 20 kg (this is the maximum weight the company will
//ship). Do not accept distances of less than 10 miles or more than 3,000
//miles. These are the company’s minimum and maximum shipping
//distances.

#include<stdio.h>

int main(){
	
	float weightofpackage;
	float distance,distance1;
	printf("\nEnter The Weight Of The Package : ");
	scanf("%f",&weightofpackage);
	printf("\nEnter The Distance That The Package Will Travel : ");
	scanf("%f",&distance);

	if(distance>0){
		if(weightofpackage>0){
			if(weightofpackage<=20){
				if (distance>=10){
					if(distance<=3000){
						printf("\nThank You ! We Are Processing Your Data");
						if(weightofpackage<=2){
								printf("\n\nYour Total Charges ( For %0.2f kg Package And the Distance %0.2f Miles it will Cover ) are : %0.2f $ ",weightofpackage,distance,distance1=(1.10/500)*distance);
						}
							else if(weightofpackage>2 && weightofpackage<=6){
								printf("\n\nYour Total Charges ( For %0.2f kg Package And the Distance %0.2f Miles it will Cover ) are : %0.2f $ ",weightofpackage,distance,distance1=(2.20/500)*distance);
							}
							else if(weightofpackage>6 && weightofpackage<=10){
								printf("\n\nYour Total Charges ( For %0.2f kg Package And the Distance %0.2f Miles it will Cover ) are : %0.2f $ ",weightofpackage,distance,distance1=(3.70/500)*distance);
							}
							else {
								printf("\n\nYour Total Charges ( For %0.2f kg Package And the Distance %0.2f Miles it will Cover ) are : %0.2f $ ",weightofpackage,distance,distance1=(4.80/500)*distance);
							}
						}
						else{
							printf("\n\nTCS Do Not Ship Packages More Then 3000 Miles");
						}
				}
				else {
					printf("\n\nTCS Does Not Ship Packages Less Then 10 Miles");
				}
	    	}
			else{
				printf("\n\nWieght Of The Package Is More then 20 kg And TCS Does Not Ship Or Accept Packages More Then 20 kg");
			}
		}
		else{
			printf("\n\nWeight Cannot Be In Negative Value");
		}
	}
	else{
		printf("\n\nDistance Cannot Be In Negative Value");
	}

return 0;
}
