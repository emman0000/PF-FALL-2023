//Programmer Emman Ali
//Lab 10 question 5
//Then create 2 very large dynamic 2D arrays of size M x N. One 2D array will make several calls to malloc in a for loop. The other will make only 2 malloc calls: 1. directly allocate a M x N block, 2. allocate separate array of pointers of size M. Then for each pointer in the array point the pointer to  correct row.  Make a function that multiplies each element in a 2D array by 3 and then divide it by 2. Time the function for both the dynamic arrays. report the times for a 
// a. 100 x 100
// b. 500 x 500
// c. 800 x 800 
sizes.

  
int main() {
    for (int i = 0; i < num_sizes; ++i) {
        int rows = sizes[i][0];
        int cols = sizes[i][1];
        // Initialize arrays with some values
        for (int j = 0; j < rows; ++j) {
            for (int k = 0; k < cols; ++k) {
                array1[j][k] = j * cols + k;
                array2[j][k] = j * cols + k;
            }
        }

        // Measure time for array with multiple malloc calls
        double time1 = measureTime(array1, rows, cols, num_iterations);
        printf("Array1 %dx%d: %.6f seconds\n", rows, cols, time1);

        // Measure time for array with only 2 malloc calls
        double time2 = measureTime(array2, rows, cols, num_iterations);
        printf("Array2 %dx%d: %.6f seconds\n", rows, cols, time2);

        // Free allocated memory
        free(array1[0]);
        free(array1);

        free(array2[0]);
        free(array2);
    }

    return 0;
}//end main 
