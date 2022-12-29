//Task 3:
//Write a program that reads the age of three people and outputs the eldest among
//them.
//Sample Output:
//Enter the age of Amir: 20
//Enter the age of Ali: 23
//Enter the age of Haider: 18
//
//Eldest: Ali
//Note:
//? The program should read the three ages in main from user.
//? Create a function that will take three ages as arguments.
//? The function will calculate who’s the eldest and prints the result within the
//function.

#include<stdio.h>

void calc(int abid,int ghani, int uzair );

int main(){
	int abid,ghani,uzair;
	
	printf("Enter the Age Of Abid : ");
	scanf("%d",&abid);
	
	printf("Enter the Age Of Abdul Ghani : ");
	scanf("%d",&ghani);
	
	printf("Enter the Age Of Uzair : ");
	scanf("%d",&uzair);
	
					calc(abid,ghani,uzair);
					
	return 0;
}

 void calc(int abid,int ghani, int uzair ){
 	                
					 if(ghani==abid && ghani==uzair && abid==uzair){
							printf("All Of Their Ages Are The Same");
						}
						else if(ghani==abid && ghani > uzair && abid > uzair){
							printf("Eldest Of Abid,Abdul Ghani and Uzair Is : Abdul Ghani And Abid As They Have Same Age");
						}
						else if(abid==uzair && uzair > ghani && abid > ghani){
							printf("Eldest Of Abid,Abdul Ghani and Uzair Is : Abid And Uzair As They Have Same Age");
						}
						else if(uzair==ghani && uzair > abid && ghani > abid){
							printf("Eldest Of Abid,Abdul Ghani and Uzair Is : Uzair and Ghani As They Have Same Age");
						}
						else if(ghani>abid && ghani>uzair){
							printf("Eldest Of Abid, Abdul Ghani and Uzair Is : Abdul Ghani");
						}
						else if(abid>ghani && abid>uzair){
						printf("Eldest Of Abid, Abdul Ghani and Uzair Is : Abid");
				        }
					else{
						printf("Eldest Of Abid, Abdul Ghani and Uzair Is : Uzair");
					}
					
 }
