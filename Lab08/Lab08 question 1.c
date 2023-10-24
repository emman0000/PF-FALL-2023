// Programmer Emman Abrar
//This program swaps integers after taking the input from the user
//24/10/23

#include <stdio.h>
//function to swap the values 
//this function also declares variables for the input taken from the user
void swapinteger(int num1, int num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swapping the, first number is:%d",num1);
     printf("\nAfter swapping, the second number is:%d",num2);
}//end void
int main(){
    int num1,num2;
   printf("Enter a number: ");
    scanf("%d",&num1);
     printf("Enter a number: ");
    scanf("%d",&num2);
    swapinteger(num1 , num2);
   
   
return 0;
}//end main
