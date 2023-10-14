
//Programmer Emman Abrar Ali
//Question 1 for Lab6
//Finding perfect numbers
//10/3/2023
#include<stdio.h>
main() {
int n , e, sum=0;
printf("enter a number n\n");
scanf("%d",&n);
// For loop will run to check all factors of n whilst adding them to check the sum
for(e=1; e<= n/2; e++){
if (n%e==0){
sum = sum + e;
}//end if

}//end for loop

if (sum==n){
printf("It is a perfect number\n");
}//end if

else if (sum!=n){
printf("Not a perfect number\n");
}
}//end main


