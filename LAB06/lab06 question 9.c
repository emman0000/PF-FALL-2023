//Programmer Emman Ali
// This program helps determine which is the smallest and largest number in an array
//10/14/23
#include<stdio.h>
int main()
{int i,j,l;
	int arr[10];
	int max=0, min=0;
	printf("Enter 10 elements into the list.");
	for( i=0;i<10;i++){
		printf("\nEnter element number %d: ",i+1);
		scanf("%d",&arr[i]);
	}//end for increment i till 9
	
	for(j=0;j<10;j++)
	{
		if(arr[j]>max)
		{
			max=arr[j];
		}//end if 
	}//end for
	min=arr[0];
	for( l =0; l<10;l++)
	{
		if(arr[l]<min)
		{
			min=arr[l];
		}//end if 
	}//end for
	
	printf("\nThe largest element in the list is %d",max);
	printf("\nThe smallest element in the list is %d",min);
}//end main
