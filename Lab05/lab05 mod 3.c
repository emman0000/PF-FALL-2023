// Programmer Emman Ali
// Lab 05 9/19/23
// Program checks divisibility by 3
#include<stdio.h>
main(){
int n;
printf("Enter a number\n");
scanf("%d",&n);

if (n % 3 == 0){
printf(" The number is a multiple of 3");
}// end for mod of 3

else {
printf(" The number is not a multiple of 3");
}// end for else
return 0;
}//end main

