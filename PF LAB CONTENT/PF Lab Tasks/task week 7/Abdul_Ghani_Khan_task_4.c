#include<stdio.h>

int main (){
	
	//Finding Speed Of Cyclist A
	
	float distanceinkm = 100; 
	float distanceinm = distanceinkm*1000 ;
	
	float hours = 10 ;  
	float minutes = 35 ; 
	
	float total_time_in_seconds = hours*60*60 + minutes*60 ;
	
	float speed = distanceinm/total_time_in_seconds ; 
	
	// _______________________________________
	
	 //Now Findin Speed Of Cyclist B
	
	float distanceinkm1 = 100 ;  
	float distanceinm1 = distanceinkm1*1000 ;
	
	float hours1 = 15 ; 
	float minutes1 = 45 ; 
	
	float total_time_in_seconds1 = hours1*60*60 + minutes1*60 ;
	
	float speed1 = distanceinm1/total_time_in_seconds1 ;
	
	//________________________________________
	
	// Displaying
	
	printf("The Speed Of the Cyclist A is %0.2f m/sec  and the  Speed Of The Cyclist B is %0.2f m/sec ",speed,speed1);
	
	
	//________________________________________
	
	
	return 0;
	
}
