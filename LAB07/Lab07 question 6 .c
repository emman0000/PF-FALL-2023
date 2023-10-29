//Programmer Emman Abrar Ali
//This program helps calculate the frequency of elements in an array

#include <stdio.h>
int main(){
//declaring variables 
int arr[100],freq[100],i,j,count,n;
printf("Enter the size of your array: ");
scanf("%d", &n);
//loop for input of numbers
for(i=0;i<n;i++){
    printf("Enter a number: ");
    scanf("%d", &arr[i]);
    freq[i]=1;
}//end for 
 for (i=0;i<n;i++){
    count=1;
    for (j=i+1;j<n;j++){
        if (arr[i]==arr[j]){
            count++; freq[j]=0;
        }//end if 
        if (freq[i]!=0){
            freq[i]=count;
        }//end if 
    }//end for j
printf("Frequency of elements is: \n");
for(i=0;i<n;i++){
 if (freq[i]!=0){
     printf("\n%d is in the array %d times" ,arr[i],freq[i]);
 }//end if    
}//end for i second loop for printing 
    
 }//end for i 
 
   
    
}//end main
