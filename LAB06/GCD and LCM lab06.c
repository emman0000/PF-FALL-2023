//Programmer Emman Ali
// This code calculates the GCD and LCM of any two numbers
//10/09/23
#include<stdio.h>
main(){
    // declaring variable
int num1,num2,gcd;
int temp,a,b,lcm;

printf("Enter two  numbers other than 0: ",num1,num2);
scanf("%d",&num1);
scanf("%d",&num2);
    a=num1;
    b=num2;
    //While for calculating GCD
while (b!=0){
    temp = b;
    b=a% b;
    a=temp;
}//end while
//calculating the lcm using gcd
gcd=a;
lcm = (num1*num2)/gcd;
// print the result
printf("LCM is = %d" , lcm);
printf("\n GCD is = %d" , gcd);
}//end main

