//Programmer Emman Abrar 
// This program determines the symmetry of an array
//13/10/23
#include<stdio.h>
int main(){
	//declaring size of array as 2X2 for matirx using two arrays
int arr[2][2];
// declaring size of transpose matrix as 2x2 using 2 arrays
int trsp[2][2];
//initialise i and j as incrementing variables
int i,j;
//for loop that takes input from the user for matrix
//i<2 since indexing of array starts from 0
	for(i=0;i<2;i++){
	printf("\nEnter elements into matrix: ");
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}//end for j loop
	}//end for i loop

	printf("\nYour 2x2 matrix is: \n");
//displaying matrix
	for(i=0;i<2;i++)
{
	     //second loop prints each value stored of the matrix
  	     for(j=0;j<2;j++)
		{
			printf("%d  ",arr[i][j]);
		}//end for j loop
		printf("\n");
	}//end i for loop
//this for loop is swapping the elements of the arr matrix to give a transpose	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			trsp[j][i]=arr[i][j];
		}//end j for loop
	}//end i for loop 
	printf("\n");
	printf("\n");
//displaying transpose of matrix	
	printf("\n transpose matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",trsp[i][j]);
		}
		printf("\n");
	}
//introduce count variable for comparision between both matrices	
	
	int count=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			//if transpose and arr correspond then count will increment 
			if(trsp[i][j]==arr[i][j])
			{
			 count++;
			}//end if 
			else
			count=0;
		
		}//end j loop
	}//end i loop
//check for symmetric matrix 
	if(count==4)
	{
		printf("\n This matrix is symmetric");
	}//end if
// for non symmetric matrix 
	else
	{
		printf("\n  This matrix is  non symmetric");
	}//end else
return 0;	
}//end main
