/*Write a program that stores the monthly costs for the following expenses generated
from operating his or her automobile: loan payment, insurance, gas, oil, tires, and
maintenance. The program should then display the total monthly cost of these
expenses, and the total annual cost of these expenses. Your program should have
two functions named calcMonthlyExp() and calcYearlyExp().
Note: The calcMonthlyExp() will only calculate the monthly expenses and returns
the result. The calcYearlyExp() will get the result from calcMonthlyExp() and then
calculates the yearly expenses and returns the yearly expenses to main. Monthly
expenses should be displayed in calcMonthlyExp() function an yearly expenses
should be displayed in main function.
Note: Your main function should only call calcYearlyExp.*/

#include<stdio.h>

float calcMonthlyExp();
float calcYearlyExp() ;

int main ()
{
	float yearlyexpenses1 =  calcYearlyExp();
	printf("\nThe Yearly Expenses Is %.2f",yearlyexpenses1);
	
	return 0;
}
float calcMonthlyExp()
{
	float loanpay = 55.0;
	float insurancepay = 60;
	float gaspay = 65;
	float oilpay = 70;
	float tirespay = 75;
	float maintanancepay = 80;
	float totalmonthlycost = loanpay+insurancepay+gaspay+oilpay+tirespay+maintanancepay;
	
	printf("\nThe Total Monthly Expenses Is %.2f",totalmonthlycost); 
	
	return totalmonthlycost;
}

float calcYearlyExp() 
{
	
	float yearlyexpenses1 = 12*calcMonthlyExp();
	return yearlyexpenses1;
	
	
}
