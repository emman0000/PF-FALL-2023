// Programmer Emman Ali
// Lab 05 9/19/23
// This is a greeting program
#include<stdio.h>
main(){
int t;
printf("Enter time in 24-hour format=\n");
scanf("%d",&t);

if (5 <= t && t <= 11){
printf("Good Morning");
}
else if (12 <= t && t <= 18){
printf("Good Evening");
}
else if (19 <= t && t <= 24){
printf("Good Night");
}
return 0;
}//end main



