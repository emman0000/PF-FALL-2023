#include<stdio.h>

void processArray(int size, int arr[]) {
int i, sum=0;
for(i=0; i<size; i++) {
sum=sum+arr[i];
}
printf("The sum is: %d\n", sum);
int max=arr[0];
for(i=0; i<size; i++) {
if(max<arr[i]) {
max=arr[i];
}
}
printf("Maximum: %d\n", max);

int min=arr[0];
for(i=0; i<size; i++) {
if(min>arr[i]) {
min=arr[i];
}
}
printf("Minimum: %d\n", min);
}
int main() {
int i, size;
printf("Please enter the size of the array: ");
scanf("%d", &size);

int arr[size];
for(i=0; i<size; i++) {
printf("Please enter %d element:", i+1);
scanf("%d", &arr[i]);
}
processArray(size, arr);
return 0;
}

