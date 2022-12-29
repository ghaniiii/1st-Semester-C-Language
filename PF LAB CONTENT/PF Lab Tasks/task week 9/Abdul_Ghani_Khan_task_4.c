//Task 4:
//A university does not allow its student to sit in the exam if his/her attendance is
//less than
//80% in any course/lab.
//Write a program to ask a student about total number of classes scheduled by
//instructor during the whole semester and total number of classes he/she attended
//during the whole semester. Now pass both integers to a function named
//calculateAttendance (int classesAttended, int classesTotal) which should calculate,
//
//display the attendance and print the decision if he/she is allowed to sit in the exam
//or not.
//Sample Output:
//Enter total classes scheduled: 10
//Enter total classes attended: 9
//Your attendance is: 90%
//You are allowed to sit in the exam

#include<stdio.h>

void calculateAttendance(float totalclassesattended, float totalnumofclasses);

int main(){
	
	float totalnumofclasses,totalclassesattended;
	
	printf("\nPlease Enter The Total Number Of Classes Scheduled By The Instructor During The Semester : ");
	scanf("%f",&totalnumofclasses);
	
	printf("\nPlease Enter The Total Number Of Classes Attended During The Whole Semester : ");
	scanf("%f",&totalclassesattended);
	
	         calculateAttendance(totalclassesattended,totalnumofclasses);     
	
}

void calculateAttendance(float totalclassesattended, float totalnumofclasses){
	
	float attendence = ((totalclassesattended/totalnumofclasses)*100);
	     printf("\nYour Total Classes Attended Are %0.2f Out Of Total Classes %0.2f",totalclassesattended,totalnumofclasses);
		 printf("\nYour Attendence Is %0.2f",attendence);
		 
		 if(attendence>=80){
		 	printf("\nYour Are Allowed To Sit In Exam");
		 } 
		 else{
		 	printf("\nYour Are Not Allowed To Sit In Exam As Your Attendence Is Less Then 80 Percent");
		 }
	
}
