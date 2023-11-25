// Programmer Emman Abrar
//This program performs basic arithemetic operations after taking input
//24/10/23
#include <stdio.h>
int main() {
void calculate(int num1, int num2 , char op)
{
int sum, sub, mult ,divd;
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
int sum, sub, mult ,divd;
int num1, num2;
char op;
   printf("Enter a number bro: " ,num1 );
    scanf("%d",& num1);
     printf("Enter another number bro: " ,num2 );
    scanf("%d",& num2);
     printf("Enter an operation:  " ,op );
    scanf(" %c",& op);
    calculate(num1, num2, op);
   
return 0;    
}//end main

