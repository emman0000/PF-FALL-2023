// Programmer Emman Abrar
//This program uses an array and takes an input for the size of the array
//It prints the highest value in the array
//It prints the lowest value in the array
//It prints the sum of all the numbers included in the array
//24/10/23
#include<stdio.h>
//Using a fucntion to increment i and calculate sum of numbers in array
void processArray(int size, int arr[]) {
int i, sum=0;
for(i=0; i<size; i++) {
sum=sum+arr[i];
}//end void
printf("The sum is: %d\n", sum);
int max=arr[0];
for(i=0; i<size; i++) {
if(max<arr[i]) {
max=arr[i];
}
}
printf("Maximum value in the array is: %d\n", max);
//declaring a variable to find the minimum value
//increment i until is less than the size, if min is 
int min=arr[0];
for(i=0; i<size; i++) {
if(min>arr[i]) {
min=arr[i];
}//end if 
}//end for
printf("Minimum value in the array is: %d\n", min);
}
int main() {
int i, size;
printf("Please enter the size of the array: ");
scanf("%d", &size);

int arr[size];
for(i=0; i<size; i++) {
printf("Please enter %d element:", i+1);
scanf("%d", &arr[i]);
}//end it 
//recalling function in main
processArray(size, arr);
return 0;
}//end main


