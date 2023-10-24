// Programmer Emman Abrar
//This program is a Car usage program. It takes the numeric of a car and number of the day of the week
// If the numeric of the car is even and the day is also even then it tells the user to use the car
//If the numeric of the car is odd and the day of the week is odd then it tells the user to use the car.
//24/10/23



#include <stdio.h>
//declaring a function to process the numeric and day of the week
//declaring variables for the numeric and day
int decideCarUsage(int numeric, int day){
    if ((numeric%2 == 0 && day%2 == 0) || (numeric%2 != 0 && day%2 != 0)){
        return 1; //use the car
    }//end if
    else return 0; // do not use the car
   
}//end int 
int main()
{
//taking input from the user in the main function
     int numeric, day;
     printf("Enter the numeric part of the car: ");
     scanf("%d", &numeric);
     printf("Enter the day: ");
     scanf("%d", &day);
 //check for any invalid number since there are only 7 days in a week    
     if(day<1 || day>7 ){
         printf("Invalid input. There are 7 days in a week");
     }//end if
     
     else if (decideCarUsage(numeric, day)){
         printf("You should use your car on this day\n ");
     }//end else if 
     
     else{
         printf("You should not use your car on this day\n ");
     }//end else

}//end main
