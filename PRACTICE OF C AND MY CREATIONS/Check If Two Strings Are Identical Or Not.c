#include<stdio.h>
#include<string.h>

int main(){
	char string1[20];
	printf("\nFIrst String\n");
	gets(string1);
	char string2[20];
	printf("\nFIrst String\n");	
	gets(string2);
	
	int length = strlen(string1);
	int count =0;
	for(int i = 0;i<length; i++){
		if(string1[i] != string2[i] || string2[i] != string1[i]){
			count++;
		}
	}
	
	
	if(count == 0){
		printf("String is The Same");
	}
	else{
		printf("Not The Same");
	}
	
	return 0;
}