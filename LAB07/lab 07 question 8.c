//Programmer Emman Abrar 
//This program takes a random arrangment of numbers in an array and prints them in ascending order.
//Input of numbers and size of the array is taken from the user 


#include<stdio.h>
int main() {
	
	int n, i,j, min, temp;
	printf("\nPlease enter the size of your array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("\nPlease enter element number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nThe original array is:\n");
	for(i=0;i<n;i++) {
		printf("%d, ",arr[i]);
	}
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
		// nested loop for i checks i agains the value of j and stores it 
			if(arr[i]>arr[j]) {
				temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}//end for nested loop i 
		}//end for j
	}//end for i
//printng the array
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++) {
		printf("%d, ",arr[i]);
	}//end for i printing loop
}//end main

