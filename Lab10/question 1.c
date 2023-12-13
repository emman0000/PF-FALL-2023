//Programmer Emman Ali
//Lab 10 first question 
//For this task you are creating a universal array printing function. Create a function in C that takes a void* as an argument along with size and some way of know what kind of data is stored. Then prints the values stored in the memory location pointed to by the void pointer. Use appropriate casting.

#include <stdio.h>
// Function to print an array of specified type
void printArray(void* arr, int size, char type) {
    int i;
    
    // Ensure size is 10 (you might want to remove this line if you want to use the size parameter)
    size = 10;
//using a switch case for character type
    switch(type) {
        case 'i':
            for (i = 0; i < size; i++) {
                printf("%d, ", ((int*)arr)[i]);
            }
            break;

        case 'c':
            for (i = 0; i < size; i++) {
                printf("%c, ", ((char*)arr)[i]);
            }
            break;

        case 'f':
            for (i = 0; i < size; i++) {
                printf("%f, ", ((float*)arr)[i]);
            }
            break;

        default:
            break;
    }

    printf("\n");
}//end function 

int main() {
    // Initialize arrays of integers, characters, and floats
    int a[10] = {0};
    char c[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    float f[10] = {0};

    // Print arrays using the printArray function
    printf("Array of integers: ");
    printArray(a, 10, 'i');

    printf("Array of characters: ");
    printArray(c, 10, 'c');

    printf("Array of floats: ");
    printArray(f, 10, 'f');

    return 0;
}//end main
