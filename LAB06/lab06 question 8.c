//Programmer Emman Ali
//This  program displays an array in reverse after taking input from the user
//10/14/23
#include<stdio.h>
 main()
{
	int n,i;
	printf("Enter the size of your array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter %d elements in your array: ",n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter element number %d :",i+1);
		scanf("%d",&arr[i]);
	}//end for loop
	
	printf("\nThe reversed array is: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d  ",arr[i]);
	} //end for loop
}//end main
