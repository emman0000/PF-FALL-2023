//Programmer Emman Ali
//Lab 10 question 3
//Create a C program that dynamically allocates memory for a 2D array of integers. Write a function that accepts a pointer to a pointer to an integer and fills the 2D array with consecutive prime numbers.


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isprime(int num) {
    int i;

    if (num < 2) {
        return false;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

// Function to fill a 2D array with consecutive prime numbers
void fillPrime(int **matrix, int rows, int cols) {
    int currentPrime = 2;
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // Find the next prime number
            while (!isprime(currentPrime)) {
                currentPrime++;
            }

            // Fill the matrix with the current prime number
            matrix[i][j] = currentPrime;
            currentPrime++;
        }
    }
}

// Function to print a 2D array
void printPrime(int **matrix, int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}//end functions 
//main function 
int main() {
    int rows, cols;
    int i, j;

    // Input the number of rows and columns
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);

    printf("\nEnter the number of columns: ");
    scanf("%d", &cols);

    // Dynamically allocate memory for a 2D array
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    // Fill the array with consecutive prime numbers
    fillPrime(arr, rows, cols);

    // Print the array filled with consecutive prime numbers
    printf("\nArray filled with consecutive prime numbers:\n");
    printPrime(arr, rows, cols);

    // Free dynamically allocated memory
    for (i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}//end main 
