//1. Write a program that asks a user to enter a no of his choice, and the
//program prints the multiplication table of that no. After that the program
//asks the user again whether he wants to enter another no to print the
//table. If the user enters Y or y, repeat the process else terminate the
//program.
//Note:
//The logic for printing the table should be in a function. Prototype for that
//function should be:
//void print_Table(int n);
//For table printing use for/while loop and for the rest of the logic use do
//while loop (for asking user to print another table until he presses N or n).

#include<stdio.h>

void table(int num);

int main(){
	int num;
	char yesno;
	
			do{
				printf("\nEnter The Number Of Your Choice :  ");
				scanf("%d",&num);
				table(num);	
				printf("\nDo You Want To Print Another Table ?  ");
				scanf(" %c",&yesno);
			} 
	
			while(yesno=='Y'|| yesno=='y');
					if(yesno=='n' ||yesno=='N'){
						printf("\nThank You For Using Our Programme");
					}
			else{
				printf("\nInvalid Input");
			}
			return 0;
	}
	
void table(int num){
	int i=1;
		while(i<=10){
			printf("\n%d X %d = %d",num,i,num*i);
		
			i++;
		}
}

