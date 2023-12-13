//Programmer Emman Ali
//Lab 10 question 2 
//Write a C program that implements a function to swap the values of two variables using only pointers (without using any arithmetic or temporary variables). Your function should be generic and work for variables of different data types. Hint: Use bitwise operator XOR.


#include <stdio.h>
#include <stdlib.h>

// Function to swap two values of any data type
void swap(void *a, void *b, int size) {
    // Treat the input pointers as arrays of bytes
    unsigned char *byteArrayA = (unsigned char*)a;
    unsigned char *byteArrayB = (unsigned char*)b;

    // Use XOR swapping algorithm to swap bytes
    for (size_t i = 0; i < size; i++) {
        byteArrayA[i] ^= byteArrayB[i];
        byteArrayB[i] ^= byteArrayA[i];
        byteArrayA[i] ^= byteArrayB[i];
    }
}//end function

//main function 
int main() {
    int num1, num2;
    char char1, char2;

    // Input two numbers to swap
    printf("Enter two numbers to swap: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    // Input two letters to swap
    printf("Enter two letters to swap: ");
    scanf(" %c", &char1);
    scanf(" %c", &char2);

    // Display the values before swapping
    printf("\nBefore swapping: num1 = %d, num2 = %d", num1, num2);
    // Call the swap function for integers
    swap(&num1, &num2, sizeof(int));
    // Display the values after swapping
    printf("\nAfter swapping: num1 = %d, num2 = %d", num1, num2);

    // Display the values before swapping
    printf("\nBefore swapping: char1 = %c, char2 = %c", char1, char2);
    // Call the swap function for characters
    swap(&char1, &char2, sizeof(char));
    // Display the values after swapping
    printf("\nAfter swapping: char1 = %c, char2 = %c", char1, char2);

    return 0;
}//end main
