#include<stdio.h>

float area;
float pi = 3.14;
float radius;

float areaofacircle(float radius){

area = pi*radius*radius;

return area;
}  


int main (){

	printf("Enter the Radius Of the First Circle : ");
	scanf("%f",&radius);
areaofacircle(radius);
float area1=area;

	printf("Enter the Radius Of the Second Circle : ");
	scanf("%f",&radius);
areaofacircle(radius);
float area2 = area;

	printf("Enter the Radius Of the Third Circle : ");
	scanf("%f",&radius);
areaofacircle(radius);
float area3 = area;

	printf("Enter the Radius Of the Fourth Circle : ");
	scanf("%f",&radius);
areaofacircle(radius);
float area4 = area;

printf("The Sum Of The Areas Of The Circle %f , %f , %f , %f is : %f",
       area1,area2,area3,area4,area1 + area2 + area3 + area4);


return 0;
}
