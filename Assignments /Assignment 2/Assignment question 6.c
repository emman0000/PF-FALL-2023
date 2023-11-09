// Programmer Emman Ali
// This program helps identify pairs of numbers in an array that add up to the target number all input is taken from the user 


#include<stdio.h>
int main(){
//declaring variables and an array 
int totalpairs=0 , arr[1000], i, j,x,n;
//asking user for their input for the size of the array and the target number 
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter a target number:  ");
scanf("%d", &x);
//loop to take input from the user
for(i=0;i<n;i++){
printf("\nEnter element %d:" ,i+1);
scanf("%d", & arr[i]);
  
}//end i loop
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
     if (arr[i]+arr[j]==x){
         totalpairs++;
         printf("The co-ordinates of the pairs are");
          printf("\n(%d,%d)" , i , j ) ;
     }//end if  
    
    }//end j loop
}//end i loop
printf("\nThe total number of pairs that add up to %d are %d" ,x , totalpairs);    

    
 return 0;
