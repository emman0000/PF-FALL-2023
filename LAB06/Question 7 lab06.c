//Programmer Emman Ali 
//This Program takes input from the user and prints the sum of all the numbers stored in the array
//10/14/23
#include<stdio.h>
int main()
{	
	int i, sum=0;
	// declaring the size of the array
	int arr[9];
	//as long as i is less than 9 it will be incremented
	for(i=0;i<9;i++)
	{
		printf("\nEnter element number %d in your array: ",i);
		scanf("%d",&arr[i]);
	}
	// previous number and next number in the index will be added to store into new sum
	for(i=0;i<9;i++)
	{
		sum=sum+arr[i];
	}
	printf("The sum of all the elements of an array is: %d",sum);
	return 0;
}//end main
