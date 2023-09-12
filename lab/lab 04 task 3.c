	// Programmar: Emman Abrar Ali
// 12/09/2023
// task 3 n integers
#include<stdio.h>

main(){
int n, number, sum=0, i=1;
// Take n number of integers
printf("Enter how many  integers",n);
scanf("%d",&n);
//Input n integers and calculate sum of squares

while (i<=n){
	printf("Enter an integer %d=",i);
	scanf("%d",&number);
	sum+=(number*number);
	// Increment i to continue loop for all numbers
	i++;
}// Print the sum of squares
printf("The sum of n integers' square is=%d\n",sum);
return 0;

}	
	
	

