#include<stdio.h>
#include<string.h>

int main(){
	char name[20];
	char yesno;
	char pass[20];
	char passagain[20];
	int l=0;
	int c=0;
	int againcount=0;
	
	printf("\nEnter Your Name : ");
	scanf("%s",name);
	
	do{
	printf("\n\nEnter Your Password : ");
	scanf("%s",pass);
	l=0;
	againcount=0;
	yesno='a';
	for(int i=0;pass[i]!='\0';i++){
				l++;
	}
	
	if(l>=8){
		for(int i=0;i<l;i++){
			if(pass[i]=='%' || pass[i]=='!' || pass[i]=='*' || pass[i]=='^' || pass[i]=='&'){
				c++;
			}
			}
			if(c!=0){
				printf("\nEnter Your Password Again For The Secret Message : ");
				scanf("%s",passagain);
			
				for(int i=0;i<l;i++){
					if(passagain[i]==pass[i]){
						againcount++;
						
					}
					else{
						printf("\nPassword Mismatched");
						yesno='n';
						break;
					}
				}
				if(againcount==l){
					printf("\nFBIII OPEENNNN UPPP!!!");
					yesno='y';
				}
			}
			else{
				printf("Password Must Contain Atleast 1 Character ");
				yesno='n';
			}
		
	}
	else{
		printf("\nYour Password Must Contain 8 or 8 plus Letters");
		printf("\nPlease ReEnter The Password");
		yesno='n';
	}
	}while(yesno=='n');
	return 0;
}
