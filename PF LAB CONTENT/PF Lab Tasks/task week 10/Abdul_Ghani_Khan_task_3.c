//3. Write a Program in C that contains two functions to Calculate
//Combination(nCr) for given values of n and r.
//? The program should take the value of n and r from the user in main.
//? The function n_c_r() should take n and r as input parameters.
//• Your program should have a function for simply calculating the factorial
//using recursion.
//• Your program should have another function which will return the nCr for
//the given values of n and r. The function will calculate Combination nCr
//and return it to main. Whenever this function needs to calculate the
//factorial, it will call the factorial function and from there it will get the
//factorial of that no.
//? The program should print value of nCr in main.
//For your understanding the prototypes of two functions are given below.
//int fact(int n); // uses recurrsion
//int n_c_r(int n, int r); // simple function
//
//The nCr (combination) formula is:
	
	
#include<stdio.h>

int fact(int n); //for recursion
float ncrformula(int n,int r);//simple fuction for calculating nCr

int main(){
	int n, r;
	printf("Enter The Value For n : ");
	scanf(" %d",&n);
	printf("Enter The Value Of r : ");
	scanf(" %d",&r);
	if(n>=r && r>=0){
	printf("The nCr formula for n = %d and r = %d is : %0.2f",n,r,ncrformula(n,r));
    }
    else {
    	printf("Enter the Value In This Order : n>=r>0 According To Its Rules");
	}
	
	return 0;
}
 
int fact(int n){
	if(n==0){
		return 1;
	}
	int fact1 = n * fact(n-1);
	return fact1;
}
float ncrformula(int n,int r){
	float ncr = (float)fact(n)/(float)(fact(r)*(n-r));
	return ncr;
}
