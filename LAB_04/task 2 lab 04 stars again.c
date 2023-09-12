	// Programmar: Emman Abrar Ali
// 12/09/2023
// task 2 
#include<stdio.h>
main(){
	//Where r is the number of column and c is the number of rows
int r,c;
printf("Enter the number of rows you would like=");
scanf("%d",&r);
printf("Enter the number of columns you would like=");
scanf("%d",&c);

// Loop for Rows where i will be incremented
int e=1;
while (e<=r){
int j=1;

// Inner loop that will run the columns
while (j<=c){
printf("*");
j++;
}
// To add another line for the pattern
printf("\n");
e++;

}
 return 0;
}
