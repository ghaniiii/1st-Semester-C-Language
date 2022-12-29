#include <stdio.h>
#include <stdbool.h>

//DECLARE FUNCTIONS HERE
int openLocks(int lockers,int students){
// Dont mind the below commented lines as if copied and if ran separately 
// it will work as i did this first separately then copied and pasted it here in the file.
	bool trash=false;
	bool trashplus=trash;
//	printf("Enter the Number of Lockers");
//	scanf("%d",&lockers);
//	printf("Enter the Number of Students");
//	scanf("%d",&students);
	int numberofopenlockers=0;
	
		for(int i=1;i<=lockers;i++){
			trash=trashplus;
			for(int j=1;j<=students;j++){
				if(i%j==0){
					trash=!trash;
//					printf("%d",trash);
					
					}

				else{
//					printf("%d",trash);
				}
			}
								if(trash==true){
						numberofopenlockers++;
					
			 	}
		
//		printf("\n");
		
		}
//	printf("%d",count);
	return numberofopenlockers;
	

}

int mostTouchableLocker(int numOfLockers, int numOfStudents)
{
    
    
    int mostTouchableLocker = 0;
    int maxTouches = 0;
    
    for(int i=1; i<=numOfLockers; i++)
    {
        int numOfTouches = 0;
    
       int j = 1; 
        while(j<=numOfStudents){
		
//			(i%j==0) ? numOfTouches++ : void ;
            if(i%j == 0)
            {
                numOfTouches++;          
            }

        // Now i will insert a condition in the below loop 
        // to Check the live touches vs previous touches

       
	 j++;}
            if(numOfTouches >= maxTouches)  // This is done so that if there are 2 or more number of lockers of the same
        {								        // touches it will accept the higher integer .
            maxTouches = numOfTouches;
            mostTouchableLocker = i;  
            
        }
    }
    

    return mostTouchableLocker;
}




//NOTHING BELOW THIS POINT
void test1(int arr[][3] , int size)
{
   printf("\n\nTask 1 Results\n\n") ;
    int passed = 0;
    int failed = 0;
    int val;
    for(int i = 0 ; i < size ; i++)
    {
        val = openLocks(arr[i][0] ,arr[i][1]);
        if(val == arr[i][2])
            passed++;
        else
        {
            failed++;
            
         printf( "Test Failed\n") ;
       
         
        printf("%s %d","Lockers = ", arr[i][0]);
        printf( "\n");
        printf("%s %d","Students= " , arr[i][1]);
        printf( "\n");
        printf("%s %d","Expected= " , arr[i][2]);
        printf( "\n");
        printf("%s %d","Result =  " , val);
        printf( "\n");
        printf( "\n-------------------------------------");
        printf("\n\n");
        }
    }
    printf("\n\n");
    printf("%s %d", "Total Passed: " , passed);
    printf("%s %d", "\nTotal Failed: " ,failed);
    
     printf("\n\n");
     printf( "\n-----------------------------------------------------------------------------------------------------------------\n");
}

void test2(int arr[][3] , int size)
{
    
   printf("\n\nTask 2 Results\n\n") ;
    int passed = 0;
    int failed = 0;
    int val;
    for(int i = 0 ; i < size ; i++)
    {
        val = mostTouchableLocker(arr[i][0] ,arr[i][1]);
        if(val == arr[i][2])
            passed++;
        else
        {
            failed++;
                
        printf("%s %d","Lockers = ", arr[i][0]);
        printf( "\n");
        printf("%s %d","Students= " , arr[i][1]);
        printf( "\n");
        printf("%s %d","Expected= " , arr[i][2]);
        printf( "\n");
        printf("%s %d","Result =  " , val);
        printf( "\n");
        printf( "\n-------------------------------------");
        printf("\n\n");
        }
        
    }   
    printf("\n\n");
    printf("%s %d", "Total Passed: " , passed);
    printf("%s %d", "\nTotal Failed: " ,failed);
    
     printf("\n\n");
      
     printf( "\n-----------------------------------------------------------------------------------------------------------------\n");
}

int main()
{
    int arr1[10][3] = {{10,10,3},
                      {100,100,10},
                      {100,72,34},
                      {70,100,8},
                      {10000,1000,5228},
                      {0,0,0},
                      {1,0,0},
                      {10000,10000,100},
                      {10000,2000,5187},
                      {17000,2154,8989}};
    int arr2[10][3] = {{10,10,10},
                      {20,10,20},
                      {72,100,72},
                      {100,70,60},
                      {150,40,120},
                      {15,7,12},
                      {1500,450,1260},
                      {100,100,96},
                      {17000,2154,15120},
                      {10000,10000,9240}};
    test1(arr1,10);
    test2(arr2,10);

    return 0;
}
