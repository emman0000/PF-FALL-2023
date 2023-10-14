//Programmer Emman Abrar Ali
//Question 2 for Lab6
//Fibonacci Sequence
//10/3/2023
#include<stdio.h>
main() {
int a=0 , b=1 , sum , totalsum=0;

for (sum=0; sum<=10000; ){
printf("%d\t", sum);
//finding the sum
if (sum%3==0 || sum%5==0 || sum%7==0){
totalsum= sum + totalsum;
}//end if
// swap number values
a=b;
b=sum;
sum=a+b;
}//end for
}//end main
