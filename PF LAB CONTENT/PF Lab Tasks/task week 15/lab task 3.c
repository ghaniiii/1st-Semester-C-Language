#include<stdio.h>
#include<string.h>
#include<unistd.h>

//function to encrypt the string
void encrypt(char *array){
	
   int i;
   for (i = 0; array[i] != '\0'; i++){
   	
      //if character is a space, no need to change
      if(array[i] == ' '){
      	
        continue;
      }
      // for lowercase characters
      else if(array[i] >= 'a' && array[i] <= 'z'){
      	
        array[i] = array[i] + 3;
        //for characters that reach past 'z'
        if(array[i] > 'z'){
        	
          array[i] = array[i] - 26;
        }
      }
      //for uppercase characters
      else if(array[i] >= 'A' && array[i] <= 'Z'){
        array[i] = array[i] + 3;
        //for characters that reach past 'Z'
        
        if(array[i] > 'Z'){
        	
          array[i] = array[i] - 26;
        }
      }
    }
    printf("\nEncrypting In Progress Please Wait ! ........... \n\n");
    sleep(1); //To make it a bit professional.
    printf("\nEncrypted string: %s\n\n", array);
}

//function to decrypt the string
void decrypt(char *array){
	
   int i;
   for (i = 0; array[i] != '\0'; i++){
   	
      if(array[i] == ' '){
        continue;
      }
      
      else if(array[i] >= 'a' && array[i] <= 'z'){
      	
        array[i] = array[i] - 3;
        
        if(array[i] < 'a'){
          array[i] = array[i] + 26;
        }
      }
      
      else if(array[i] >= 'A' && array[i] <= 'Z'){
        array[i] = array[i] - 3;
        
        if(array[i] < 'A'){
          array[i] = array[i] + 26;
        }
      }
    }
    printf("\nDecrypting In Progress Please Wait ! ........... \n\n");
    sleep(1);
    printf("\nDecrypted string: %s\n\n",array);
    

}

int main(){
	
	
    int choice;
    char array[100];
    //menu
    printf("\nPress : 1 : To Encrypt Your Choice \n\n");
    printf("\nPress : 2 : To Decrypt Your Choice \n\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    
    //take string as input
    printf("\nEnter the string: ");
    fflush(stdin);
    gets(array);


    switch(choice)
    {
        case 1: encrypt(array);
                break;
        case 2: decrypt(array);
                break;
        default: printf("\nInvalid choice\n");
    }
               
    printf("\n_____________________________________________________________________________________________________\n");
	
	printf("\nThank You for Using Our Program It Took Alot Of Errors And Attempts To Create. (By Abdul Ghani Khan)\n");
	
	printf("\n_____________________________________________________________________________________________________\n");

    return 0;
}
