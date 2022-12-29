#include<stdio.h>
#include<string.h>

int main(){
	
	char yesno;
	printf("\nYou Cant Win Rock Paper Scissors From Me...\n");
	printf("\n_____________________________________________________________________\n");
	
	do{
		char choice[100];
		
		printf("\nNow Lets Get Started. What do you Select Rock, Paper Or Scissors ?\n");
		fflush(stdin);
		gets(choice);
		printf("\n_____________________________________________________________________\n");

		
		int length = strlen(choice);
		
		char rock[4]; rock[0]='r'; rock[1] = 'o'; rock[2]='c'; rock[3]='k';
		char paper[5]; paper[0] = 'p'; paper[1] = 'a'; paper[2] = 'p'; paper[3] = 'e'; paper[4] = 'r';
		char scissor[8]; scissor[0] = 's'; scissor[1] = 'c'; scissor[2] = 'i'; scissor[3] = 's'; scissor[4] = 's'; scissor[5] = 'o'; scissor[6] = 'r'; scissor[7] = 's';
		
		int rockcount = 0;
		int papercount = 0;
		int scissorscount = 0;
		
		for(int i=0;i<length;i++){
			if(choice[i] == rock[i]){
				rockcount++;
			}
			if(choice[i] == paper[i]){
				papercount++;
			}
			if(choice[i] == scissor[i]){
				scissorscount++;
			}
			
		}
		
		if(rockcount == 4){
			printf("\nPaper\n");
			printf("\n_____________________________________________________________________\n");		
		}
		else if(papercount == 5){
			printf("\nScissors\n");
			printf("\n_____________________________________________________________________\n");
		}
		else if(scissorscount == 8){
			printf("\nRock\n");
			printf("\n_____________________________________________________________________\n");
		}
		
		
		printf("\nI TOlD YOU I WOULD WIN ANYWAYS ..\n");
		printf("\n_____________________________________________________________________\n");
		
		printf("\nDo You Want To Play Again ? : y/n");
		scanf(" %c",&yesno);
		printf("\n_____________________________________________________________________\n");
		if(yesno == 'n' || yesno == 'N'){
			break;
		}
	}
	while(yesno == 'y' || yesno == 'Y');
	
	return 0;
}