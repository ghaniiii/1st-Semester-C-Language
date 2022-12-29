#include<stdio.h>
#include<string.h>

int main(){
	
	char string[100];
	printf("Enter the string\n\n");
	gets(string);
	
	int length = strlen(string);
	
	char separation[length*2];
	
	
	for(int i=0;i<length;i++){
		separation[i] = ' ';
	}
	int x = 0;
	for(int i=0;i<length*2;i++){
		if(i%2==0){
			separation[i] = string[x];
			x++;
		}
		else{
			separation[i] = ' ';
		}
	}
	
	puts(separation);
	
	return 0;
}