//1. Write program that takes the marks of 10 students from user. The program
//then displays the max marks, min marks, average marks, marks.

#include<stdio.h>
int main(){
	int size=10;
	int marks[size];
	
	for(int i=0;i<size;i++){
	
		printf("\nEnter the Student Marks Respectively : ");
		scanf("%d",&marks[i]);
	
	}
	
	int maxmarks=marks[0];
	
	for(int i=0;i<size;i++){
		if(maxmarks<marks[i]){
			maxmarks=marks[i];
		}
		
	}
	printf("\nMax Marks Are : %d ",maxmarks);
	
	int minmarks=marks[0];
	
	for(int i=0;i<size;i++){
		if(minmarks>marks[i]){
			maxmarks=marks[i];
		}
		
	}
	printf("\nMin Marks Are : %d ",minmarks);
	
	float average=0;
	
	for(int i=0;i<size;i++){
		average = average + marks[i];
	}
	
	printf("\nAverage Marks Are : %0.1f \n\n",average/(float)size);
	
	
	for(int i=0;i<size;i++){
		printf("\nStudents Marks Respectively Are : %d ",marks[i]);
	}
	
	return 0;
}
