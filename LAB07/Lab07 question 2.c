//Programmer Emman Abrar 
//This program uses arrays and changes the rotation of those arrays taking an input from the user
//12/10/23
#include<stdio.h>
int main(){
//declaring variable n as input variable
int n;
//declaring other variables for postion change
int x,y,z,p,t;
	printf("Enter the size of your array:",n);
	scanf("%d",&n);
// inserting n as the size of the array
	int arr[n];

//for loop that increments x and takes input	 
	for(x=0;x<n;x++)
	{
		printf("\nEnter the element number %d:",x+1);
		scanf("%d",&arr[x]);
	}//end for loop
//for loop to print the elements stored	
	for(x=0;x<n;x++)
	{
		printf("%d, ",arr[x]);
	
	}//end for loop 
//taking a rotational number to change the array postions	
	printf("\nEnter rotational number:",p);
	scanf("%d",&p);
	printf("\n");
//shifting position for loop that rotates position by 1	
	for(y=0;y<p;y++)
	{
		t=arr[0];
		for( z=0;z<n-1;z++)
		{
			arr[z]=arr[z+1];
		}
		arr[n-1]=t;
	}
//this loop will print the new rotation
	for(x=0;x<n;x++)
	{
		printf("%d, ",arr[x]);
	
	}//end second for loop of x
return 0;	
}//end main
