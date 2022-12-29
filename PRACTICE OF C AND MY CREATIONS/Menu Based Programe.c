//Write a C program that does the following according to user input. It’s a
//menu-driven program. The user is asked to enter a string. Then the program
//displays the following menu:
//A) Count the number of vowels in the string
//B) Count both the vowels and consonants in the string
//C) Display the most frequent character in the string.
//D) Concatenate another string with the existing string.
//E) Exit the program.
//The program performs the operation selected by the user and repeats until
//the user selects E to exit the program.


#include<stdio.h>
#include<string.h>

int main(){
	
	char choice;
	char string[50];
	int length;
	
	
	do{
		
		
		printf("\nEnter the String\n");
		gets(string);
		
		length = strlen(string);
		
	printf("\nA. Count the number of vowels in the string\n");
	printf("\nB. Count both the vowels and consonants in the string\n");
	printf("\nC. Display the most frequent characters in the string.\n");
	printf("\nD. Count the number of vowels in the string\n");
	printf("\nE. Exit The Program\n");
	scanf(" %c",&choice);
	
	if(choice == 'A'){
		
		int count = 0;
		
		for(int i=0;i<length;i++){
			if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
				count++;
			}
		}
		
		printf("The Number Of Vowels Are %d ",count);
	}
	else if(choice == 'B'){
		int count;
		int consonants;
		
		count=0;
		consonants=0;
		
		for(int i=0;i<length;i++){
			if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
				count++;
			}
			else{
				consonants++;
			}
		}
		
		printf("The Number Of Vowels Are %d  And  Consonants Are %d ",count,consonants);
		
	}
	else if(choice == 'C'){
		
		char frequentchar;
		int count=0;
		int maxcount=0;
		
		for(int i=0;i<length;i++){
			count=0;
			for(int j=0;j<length;j++){
				if(string[i]==string[j]){
					count++;
				}
			}
			if(maxcount<count){
				maxcount=count;
				frequentchar = string[i];
			}
		}
		
		
		printf("The Highest Character Is %c And Its Count Is %d",frequentchar,maxcount);
		
		
	}
	else if(choice == 'D'){
		char string1[100];
		
		printf("Enter the Second String");
		fflush(stdin);
		gets(string1);
		
		strcat(string1,string);
		
		puts(string1);
		
		
		
	}
	else if(choice == 'E'){
		break;
	}
}while(choice!='E');
	
	
	
	return 0;
}