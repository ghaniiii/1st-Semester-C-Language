#include<stdio.h>
#include<math.h>

// Enter the Values Of Base and Perpendicular And This Programme Will Give You The Value Of Hypotenous
// checking the git status comm
int main() {


float b;
printf("Please enter the value of b which is the length of one side of the triangle");
scanf("%f",&b);

float d = pow(b,0.5);

float c;
printf("Please enter the value of c which is the length of the other side of the triangle");
scanf("%f",&c);

float e = pow(c,0.5);

float a;
float sum = d + e;
printf ("The hypotunous value is as follows or pythagorous theorem \n \t %f ",sum);

return 0;
}
