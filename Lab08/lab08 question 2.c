// Programmer Emman Abrar
//This program performs basic arithemetic operations after taking input
//24/10/23
#include <stdio.h>
int main() {
//using a function for all operations to be called
void calculate(int num1, int num2 , char op)
{
int sum, sub, mult ,divd;
//using a switch case for selection of operators
switch (op){
    case '+':
    sum=num1+num2;
    printf("The sum of the chosen numbers: %d",sum);
    break;
     case '-':
    sub=num1-num2;
    printf("The difference between the chosen numbers: %d",sub);
    break;
     case '*':
    mult=num1*num2;
    printf("The product of the chosen numbers: %d",mult);
    break;
     case '/':
    divd=num1/num2;
    printf("The quotient of the chosen numbers: %d",divd);
    break;
}//end switch
}//end void
//declaring variables in main fucntion
int sum, sub, mult ,divd;
int num1, num2;
char op;
//taking input from the user 
   printf("Enter a number bro: " ,num1 );
    scanf("%d",& num1);
     printf("Enter another number bro: " ,num2 );
    scanf("%d",& num2);
     printf("Enter an operation:  " ,op );
    scanf(" %c",& op);
//calling void function in main function
    calculate(num1, num2, op);
   
return 0;
}//end main

