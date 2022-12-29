//Write a C program to check whether an alphabet is a vowel or consonant.
//Your program should ask the user to input an alphabet.

#include<stdio.h>
int main(){
	
	char alphabet;
	printf("Enter Any Letter To See If Its A Vowel Or Not : ");
	scanf("%c",&alphabet);
	
	if(alphabet>='a' && alphabet<='z' || alphabet>='A' && alphabet<='Z'){
	switch(alphabet){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("%c Is A Vowel",alphabet);
			break;
		default : printf("%c Is A Consonant",alphabet);
			
	}
}
	else{
		printf("Not A Valid Alphabet");
	}
	return 0;
}
