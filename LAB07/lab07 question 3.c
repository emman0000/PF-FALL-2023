//Programmer Emman Abrar 
//This program finds the sum of numbers in an array
//12/10/23
#include<stdio.h>
int main(){
//declare the variables for input and sum,n and s
	int n,i,s=0;
	printf("Enter the size of the number: ");
	scanf("%d",&n);
//take input n as size of the array
	int arr[n];

//for loop to store elements	
	for(i=0;i<n;i++){
		printf("\nEnter desired number: ");
		scanf("%d",&arr[i]);
	}//end for loop
//store total sum of array by incrementing one number at a time
	for(i=0;i<n;i++){
		s=s+arr[i];
	}//end for loop
printf("\nTotal sum of all numbers is: %d",s);


return 0;
}//end main
