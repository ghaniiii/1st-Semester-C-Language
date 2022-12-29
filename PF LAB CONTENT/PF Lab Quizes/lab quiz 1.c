#include<stdio.h>
#include<string.h>

int main(){
	int row,col;
	char seats[4][4]; 
	int choice;
	char yesno;
	int count=0;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			seats[i][j] = '_';
		}
	}
	count = 0;

	for(int i=0;i<1;){
	
	printf("Chose From The Menu : \n");
	printf("1. Seating Chart\n");
	printf("2. Purchase A Seat \n");
	printf("3. See How Many Seats Have Sold \n");
	printf("4. Quit Program.\n");
	
	scanf("%d",&choice);
	
	if(choice == 1){
		//Seating Chart
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				printf(" %c",seats[i][j]);
			}
			printf("\n");
		}
	
	}
	
	else if(choice == 2){
		do{
		//Purchase A Ticket
		printf("\nEnter The Row In Which You want to occupy a seat : (1-4) : ");
		scanf("%d",&row);
		printf("\nEnter the Seat Number You Want To Occupy (1-4) : ");
		scanf("%d",&col);
		row = row -1;
		col = col -1;
		seats[row][col] = '*';
		
		
		printf("\nDo You Want To Reserver Another Seat For A Friend : Y/N : ");
		
		scanf(" %c",&yesno);
		}
		
		
		while(yesno =='Y');
	}
	
	else if(choice == 3){
	
		//Count
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(seats[i][j]=='*'){
					count++;
				}
			}
			
		}
		
		printf("\nTotal %d Seats Have Been Sold\n",count);
	
	}
		
	else if(choice == 4){
		i=1;
	}
		
	}
	
	
	return 0;
}
