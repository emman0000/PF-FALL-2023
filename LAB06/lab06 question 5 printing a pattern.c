//Programmer Emman Abrar Ali
// This program prints a sequence of even numbers followed by a sequence of normal real numbers.
//10/14/23
#include<stdio.h>
int main()
{
	int i=0;
	for(i=0;i<=6;i++)
	{
		if(i%2==0)
		{
			printf("%d\t%d\t%d\t%d",i,i,i,i);
		}//end if 
		else
		{
			printf(" \t%d\t%d",i,i);
		}//end else
		printf("\n");
		
	}//end for 
	
}//end main
