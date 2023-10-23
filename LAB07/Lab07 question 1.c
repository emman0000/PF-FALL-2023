//Programmer Emman Abrar 
//This program divides two numbers without using the division operator
//12/10/23
#include<stdio.h>
int main(){
//declare two variables as input numbers
int i,j,k=0;

printf("\nEnter your numerator:",i);
scanf("%d",&i);
printf("\nEnter you divisor:",j);	
	scanf("%d",&j);
if (i>=j){

	while(i>=j)
	{
		i=i-j;
		k++;
	}//end while
	printf("Answer is: %d",k);
printf("\n Remainder is:%d",i);
}//end if
 else if (i<j){
	printf("\nThe answer will be less than 0");
}//end else if 

return 0;
}//end main
