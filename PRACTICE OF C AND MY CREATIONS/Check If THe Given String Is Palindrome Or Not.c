#include<stdio.h>
#include<string.h>

int main(){
	
	printf("\n\nThis Programme Works On Every String If It Even Contains Spaces Oc Capital Or Small Letters Too\n\n");
	
	char string[20];
	char withoutspaces[20];
	
	printf("\nEnter the String To Check Palindrome\n");
	gets(string);
	
	int length = strlen(string);
	
	int x=0;
	for(int i=0;i<length;i++){
		if(string[i] != ' '){
			withoutspaces[x] = string[i];
			x++;
		}
	}
	withoutspaces[x] = '\0';
	
	length = strlen(withoutspaces);
	
	int count = 0;
	int last = length-1;
	for(int i=0;i<length/2;i++){
		if(withoutspaces[i] == withoutspaces[last] || withoutspaces[i] + 32 == withoutspaces[last] || withoutspaces[i] == withoutspaces[last] +32 || withoutspaces[i] == withoutspaces[last] -32 || withoutspaces[i] -32 == withoutspaces[last]){
			count++;
			last--;
		}
	}
	
	if(count == length/2){
		printf("\nYes Palindrome");
	}
	else{
		printf("\nNot A Palindrome");
	}
	
	return 0;
}