#include<stdio.h>

//value and this programme will give you how much exactly notes in pakistani currency will you get

int main(){
	
    int amount;
	
	
	
	printf("Enter The Number That You Want To Convert To Pakistani  : ");
	
	scanf("%d",&amount);
	
	int amountin5000=amount/5000; // It Will Give Us Number Of 5000 Notes
	amount=amount%5000; // It Will Give Us Number Of Left Overs After 5000 Notes
	
	
	int amountin1000=amount/1000; // It Will Give Us Number Of 1000 Notes
	amount=amount%1000; // It Will give us number of left overs after 1000 notes

	
	int amountin500=amount/500; // It Will Give Us Number Of 500 Notes
	amount=amount%500; // It will give us number of left overs after 500 notes
	
	
	int amountin100=amount/100; // It will give us number of 100 notes
	amount=amount%100; // It will give us number of left overs after 100 notes
	
	
	int amountin50=amount/50; // It will give us number of 50 notes
	amount=amount%50; // It will give us number of left overs after 50
	
	
	int amountin20=amount/20; // It will give us number of 20 notes
	amount=amount%20; // It will give us number of left overs after 20
	
	
	int amountin10=amount/10; // It will give us number of 10 notes
	amount=amount%10; // It will give us number of left overs after 10
	
	
	int amountin5=amount/5; // It will give us number of 5 notes
	amount=amount%5; // It will give us number of left overs after 5
	
	
	int amountin2=amount/2; // It will give us number of 2 notes
	amount=amount%2; // It will give us number of left overs after 2
	
	
	
	printf("5000 Noted Will Be %d \n1000 Notes Will Be %d \n500 Notes Will Be  %d \n100 Notes Will be %d \n50 Notes Will Be %d \n20 Notes Will Be %d \n10 Notes Will Be %d \n5 Notes Will Be %d \n2 Notes Will Be %d \n1 Notes Will Be %d",amountin5000,amountin1000,amountin500,amountin100,amountin50,amountin20,amountin10,amountin5,amountin2,amount);
	
	
	
	return 0;
}
