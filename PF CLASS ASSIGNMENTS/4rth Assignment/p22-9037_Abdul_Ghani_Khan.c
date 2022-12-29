#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Declaring the Function Which Will Check If the Matrix Is Symmetric Or Not
bool symmetriccheck(int rows,int cols,int thirdmatrix[rows][cols]);

int main(){
	
	//Declaring 2 arrays which are 2D
	
	//First Array Declaration
	int array1[4][4];
	//Second Array Declaration
	int array2[4][4];
	//Declaraing a variable will be needed in further switching the diagonals of the Matrices
	int tempvalue;
	
	/*for loop having a nested for putting the random values in the Matrix called array1
	I Have used rand function through the library stdlib.h which gives us random values
	and additonal i have taken mod of that value using % as rand fucntion gives us very large values
	and it takes a mod which will give us values between 0 and 10*/
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			array1[i][j] = rand()%10 + 1;
		}
	}
	
	/*for loop having a nested for loop for putting the random values in the Matrix called array2
	I Have used rand function through the library stdlib.h which gives us random values
	and additonal i have taken mod of that value using % as rand fucntion gives us very large values
	and it takes a mod which will give us values between 0 and 10*/
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			array2[i][j] = rand()%10 + 1;
		}
	}
	
	printf("\n________________________________\n");
	printf("The First Matrix Is :  \n\n");
	
	//for loop having a nested for loop for printing the matrix which is array1
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%02d ",array1[i][j]);
		}
		printf("\n");//it is done so the array is not printed in one line rather it is printed in a matrix shape.
	}
	
	printf("\n________________________________\n");
	printf("\nThe Second Matrix Is  :  \n\n");
	
	//for loop having a nested for loop for printing the matrix which is array2 
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%02d ",array2[i][j]);
		}
		printf("\n");//it is done so the array is not printed in one line rather it is printed in a matrix shape.
	}
	
	//using a for loop with a nested for loop for changing the diagonals of the matrices
	//Here tempvalue is used that we declared above 
	//it behaves like a bridge while shifting each value 
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j){
			    tempvalue = array1[i][j];
			    array1[i][j] = array2[i][j];
			    array2[i][j] = tempvalue ;
			}
			if((i+j)==(4-1)){
				tempvalue = array1[i][j];
				array1[i][j] = array2[i][j];
				array2[i][j] = tempvalue ;
			}
		}
	}
	
	printf("\n________________________________\n");
	printf("\nThe Updated First Matrix Is :  \n");
	printf("Which Is Replacing The Diagonals Both Right And Left Of \nthe First Matrix With The Second Matrix\n\n");
	
	//This is for printing the updated Matrix which is array1 after we changed its diagonals or we can say replaced it with the other matrix
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%02d ",array1[i][j]);
		}
		printf("\n");//for line change so we get a proper shape like a Matrix
	}	
	
	printf("\n________________________________\n");
	printf("\nThe Updated Second Matrix Is :  \n");
	printf("Which Is Replacing The Diagonals Both Right and Left Of \nthe First Matrix With The Second Matrix\n\n");

	//This is for printing the updated Matrix which is array2 after we changed its diagonals or we can say replaced it with the other matrix
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%02d ",array2[i][j]);
		}
		printf("\n");//for line change so we get a proper shape like a Matrix
	}
	
	/*Declaring the third Matrix Which will for each element calculate the sum of the neighbouring elements and then devide the same  
	sum with the element for which we are finding the sum of its neighbouring elements */
	int thirdmatrix[4][4];
	
	//Operating : We will find the sum of all the elements in the neighbour of the original element and then devide the sum by the original element.
	//Doing the operation  on the first row 
	thirdmatrix[0][0] = (array2[0][1]+array2[1][1]+array2[1][0]+array2[3][0]+array2[3][1]+array2[0][3]+array2[1][3]+0)/array2[0][0];
	
	/*If you see we have sumed the 8th neighbouring element taking it as 0 because on the corners we dont have neighbouring 8th element or one 
	element so as conveyed by the teacher we will take it as 0*/
	thirdmatrix[0][1] = (array2[0][2]+array2[1][2]+array2[1][1]+array2[1][0]+array2[0][0]+array2[3][0]+array2[3][1]+array2[3][2])/array2[0][1]; 
	thirdmatrix[0][2] = (array2[0][3]+array2[1][3]+array2[1][2]+array2[1][1]+array2[0][1]+array2[3][1]+array2[3][2]+array2[3][3])/array2[0][2];
	thirdmatrix[0][3] = (array2[1][3]+array2[1][2]+array2[0][2]+array2[0][0]+array2[1][0]+array2[3][2]+array2[3][3]+0)/array2[0][3];
	
	//Doing the operation on the second row
	thirdmatrix[1][0] = (array2[0][0]+array2[0][1]+array2[1][1]+array2[2][1]+array2[2][0]+array2[0][3]+array2[1][3]+array2[2][3])/array2[1][0];
	thirdmatrix[1][1] = (array2[0][0]+array2[0][1]+array2[0][2]+array2[1][2]+array2[2][2]+array2[2][1]+array2[2][0]+array2[1][0])/array2[1][1];
	thirdmatrix[1][2] = (array2[0][1]+array2[0][2]+array2[0][3]+array2[1][3]+array2[2][3]+array2[2][2]+array2[2][1]+array2[1][1])/array2[1][2];
	thirdmatrix[1][3] = (array2[0][3]+array2[0][2]+array2[1][2]+array2[2][2]+array2[2][3]+array2[2][0]+array2[1][0]+array2[0][0])/array2[1][3];
	
	//Doing the same operation on the third row
	thirdmatrix[2][0] = (array2[1][0]+array2[1][1]+array2[2][1]+array2[3][1]+array2[3][0]+array2[1][3]+array2[2][3]+array2[3][3])/array2[2][0];
	thirdmatrix[2][1] = (array2[1][0]+array2[1][1]+array2[1][2]+array2[2][2]+array2[3][2]+array2[3][1]+array2[3][0]+array2[2][0])/array2[2][1];
	thirdmatrix[2][2] = (array2[1][1]+array2[1][2]+array2[1][3]+array2[2][1]+array2[2][3]+array2[3][1]+array2[3][2]+array2[3][3])/array2[2][2];
	thirdmatrix[2][3] = (array2[1][3]+array2[1][2]+array2[2][2]+array2[3][2]+array2[3][3]+array2[3][0]+array2[2][0]+array2[1][0])/array2[2][3];
	
	//Doing the same operation on the fourth row
	thirdmatrix[3][0] = (array2[2][0]+array2[2][1]+array2[3][1]+array2[0][0]+array2[0][1]+array2[2][3]+array2[3][3]+0)/array2[3][0];
	thirdmatrix[3][1] = (array2[3][0]+array2[2][0]+array2[2][1]+array2[2][2]+array2[3][2]+array2[0][0]+array2[0][1]+array2[0][2])/array2[3][1];
	thirdmatrix[3][2] = (array2[3][1]+array2[2][1]+array2[2][2]+array2[2][3]+array2[3][3]+array2[1][0]+array2[0][2]+array2[0][3])/array2[3][2];
	thirdmatrix[3][3] = (array2[3][2]+array2[2][2]+array2[2][3]+array2[0][2]+array2[0][3]+array2[2][0]+array2[3][0]+0)/array2[3][3];
	
	printf("\n________________________________\n");
	printf("\nThe Summation Task Is Done As Below On Matrix 2 As Told In Which We Find the Sum Of the \nneighbouring elements and deivde with the element itself\nand store it at the original element index\n\n");
	
	/*Now Printing The Whole Third Matrix Which include The Operation That I Explained which is summing the neighbouring elements and then 
	deviding by the same original element (For printing a for loop is used with a nested for loop)*/
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%02d ",thirdmatrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\n________________________________\n");
	
	//Calling the function that will tell if the Matrix is symmetric or not and then storing it in a bool variable named symmetricornot
	bool symmetricornot = symmetriccheck(4,4,thirdmatrix);																	
	
	//Not this will tell us if it is symmetric or not if the bool is true or 1 (in C which is true) it will print that it is symmetric
	if(symmetricornot==true){
		printf("\nThe Matrix Is Symmetric\n");
	}	
	//or else if the bool is false or 0 it will print it is not symmetric
	else{
		printf("\nThe Matrix Is Not Symmetric\n");
	}															
																								
	
	return 0;
}

//Definint eh function which will check if the matrix is symmetric or not
bool symmetriccheck(int rows,int cols,int thirdmatrix[rows][cols]){ 
	
	/*Taking another Matrix with the same rows and cols as it will store the 
	transpose of the original Matrix*/
	int transpose[rows][cols],count=0;//Using count that will further help us in figuring out if the Matrix is transpose or not
	
	//Now Chaning Rows into columns and columns into rows using for loop with a nested for loop
	for(int i=0;i<cols;i++){
		for(int j=0;j<rows;j++){
			transpose[j][i]=thirdmatrix[i][j];
		}
	}
	
	/*Now Checking if the each element of the original Matrix present in row is equal to the transpose of the 
	Orgiginal Matrix  element present in the column respectively it will check first row element with the  first column element 
	and so on . And When All are same it will for each time plus 1 in count*/
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(transpose[i][j]==thirdmatrix[i][j]){
				count++;
			}
		}
	}
	
	/*Now If the Count is equal to the product of rows and columns it will return true that it is a symmetric if not then
	it will return false this means because if it is equal then we will come to know that all rows have switched to columns and 
	all columns are switched to rows and we have saved that in count */
	if(count==rows*cols){
		return true;
	}
	else{
		return false;
	}
	
}