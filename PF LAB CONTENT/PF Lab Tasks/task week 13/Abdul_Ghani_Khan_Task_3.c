//3. Write a program that takes the name and password of a person. The
//password should be passed to a function as an argument. The function
//should check if the password is fulfilling the following requirements:
//• Password must be 8 characters long.
//• Password must contain at least one special symbol (%, !, *, ^, &).
//• (Plus, you can further add your restrictions too, recommended but
//optional). If any of the above-mentioned criteria’s is not fulfilling the
//program must prompt the user to enter a valid password again.
//• When all the criteria of the password fulfill, the program asks again to
//enter the password to display a secret message. If it matches with the
//information entered by the user previously. The program should display
//a message “You know what? You can be a great programmer. Keep
//Coding!”. You can display your own funny/customized message too.
//
#include<stdio.h>
#include<string.h>


int main(){
	char name[25],pwd[25];
	char truefalse;
	
	printf("Enter name: ");
	scanf("%s",name);

	do{	
	printf("\nEnter password: ");
	scanf("%s",pwd);
	
	int l=strlen(pwd),i,c=0;
	
	if(l>=8){
		for(i=0;i<l;i++){
			if(pwd[i]=='!'||pwd[i]=='*'||pwd[i]=='%'||pwd[i]=='&'||pwd[i]=='^'){
				c++;
			}
		}
		if(c!=0){
			printf("\nEnter password again to display secret message: ");
			char pwd1[25];
			scanf("%s",pwd1);
			
			if(strcmp(pwd,pwd1)==0){
				printf("\nYou know what? You can be a great programmer. Keep Coding!\n");
				truefalse=1;
			}
			else{
				printf("\nPassword Mismatch.\n");
			}
		}
		else{
			printf("\nPassword must contain at least one special symbol(!*%&^).\n");
		}
	}
	else{
		printf("\nPassword must be 8 characters long.\n");
		truefalse=0;
	}
}
while(truefalse==0);
	return 0;
}
