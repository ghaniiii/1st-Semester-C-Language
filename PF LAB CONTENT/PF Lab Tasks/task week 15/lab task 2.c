//2. Write a C program that does the following according to user input. It’s a
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

//void(vowels)

int main(){
	
	
	
	char option;
	int size=20;
	int count;
	char array[size];
	int stringsize;
	
	do{
	
	count = 0;
	
	fflush(stdin);
	
	printf("\nEnter the String\n");
	
	gets(array);
	
	stringsize = strlen(array);
	
	printf("\nWe Have the Following Menu, What Function Do You Want To Perform?\n\n");
	printf("A) Count the Number Of Vowels In the String. \n");
	printf("B) Count both the vowels and consonants in the string.\n");
	printf("C) Display the most frequent character in the string.\n");
	printf("D) Concatenate another string with the existing string.\n");
	printf("E) Exit The Program.\n");
	
	printf("\nEnter Your Option Here : \n\n");
	scanf("%c",&option);
	
	if(option == 'a' || option == 'A'){
		
		for(int i=0;i<stringsize ;i++){
			if(array[i] == 'a' || array[i] == 'A' || array[i] == 'e' || array[i] ==  'E' || array[i] == 'i' || array[i] == 'I' || array[i] == 'O' || array[i] == 'o' || array[i] == 'u' || array[i] == 'U'){
				count++;
			}
		}
		printf("There Are %d Vowels In the String\n",count);
	}
	else if(option == 'b' || option == 'B'){
		int count1=0;
		for(int i=0;i<stringsize ; i++){
			if(array[i] == 'a' || array[i] == 'A' || array[i] == 'e' || array[i] ==  'E' || array[i] == 'i' || array[i] == 'I' || array[i] == 'O' || array[i] == 'o' || array[i] == 'u' || array[i] == 'U'){
				count++;
			}
			else{
				count1++;
			}
		}
		printf("There Are %d Vowels And %d Consonents In The String. So Total Vowels And Consonents Are %d\n",count,count1,count+count1);
	}
	
	else if(option == 'c' || option == 'C'){
		
		int count1[256] = { 0 };
		int max = 0; // Initialize max count
	    char result; // Initialize result
	 
	    // Traversing through the string and maintaining
	    // the count of each character
	    for (int i = 0; i<stringsize; i++) {
	        count1[array[i]]++;
	        if (max < count1[array[i]]) {
	            max = count1[array[i]];
	            result = array[i];
	        }
	    }
	    printf("The Most Frequent Character in the String Is %c \n",result);
	}
	
	else if(option == 'd' || option =='D'){
		char array2[20];
		printf("Enter the Second String That You Want To Concatenate With the First String : \n");
		
		fflush(stdin);
		
		gets(array2);
		strcat(array,array2);
		printf("The Concatenated String Is Below : \n");
		puts(array);
	}
	
	if(option == 'E'){
		break;
	}
	}
	while(option != 'e' );
	
	printf("\n____________________________________________________________________________________________________\n");
	
	printf("\nThank You for Using Our Program It Took Alot Of Errors And Attempts To Create. (By Abdul Ghani Khan) \n");
	
	printf("\n____________________________________________________________________________________________________\n");
	return 0;
}


