//Programmer Emman Abrar Ali
//Assignment question 2
//This program helps find the largest square submatrix of 1s in a binary matrix


#include <stdio.h>
//function  to print the matrix 
void printmatrix(int mat[][100], int n, int m) {
	int i;
    for (i = 0; i < n; i++) {
    	int j;
        for (j = 0; j < m; j++) {
			printf("%-*d", n, mat[i][j]);
		}//end foor loop
        printf("\n");
    }//end for loop
}//end function  

//function to take input from user 
void userinput(int mat[][100], int n, int m) {
	int i;
printf("Enter a binary element in each box");
    for (i = 0; i < n; i++) {
    	int j;
        for (j = 0; j < m; j++) {
//showing the user the element co-ordinates
            printf("\nEnter element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
} 
//function responsible for submatrix
int submatrix(int mat[][100], int i, int j, int sq) {
    int sum = 0, n, m;
    for (n = i;n < sq + i; n++) {
		for (m = j;m < sq + j; m++) { 
			sum += mat[n][m];
		}
	}
    return sum;
} 
//function to find largest square submatrix
int largestsquare(int mat[][100], int n, int m) {   

    int sq;
    if (n>m){
        sq=n;
    }
    else
    sq=m;
    while (sq >= 2) {
    	int i;
        for (i = 0; i < n; i++) {
        	int j;
            for (j = 0; j < m; j++) {
                if (sq + i <= n && sq + j <= m && submatrix(mat, i, j, sq) == sq*sq) 
				return sq;
            }
        }
        sq--;
    }
    return 0;
}
 //main function 
int main() {
    int n, m, arr[100][100] = {0};
    do {
        printf("Enter dimensions of matrix in the form (rowsxcolumns): ");
        scanf("%dx%d", &n, &m);
    } 
	while (n < 2 || m < 2);
    
    userinput(arr, n , m);
    printf("The matrix looks like this:\n");
    printmatrix(arr, n, m);
    printf("\n");

    int sq = largestsquare(arr, n, m);
    if (sq==0){
     printf("No square matrix of size greater than or equal to 2x2 found");
     }
     else 
     printf("Largest square matrix of size %dx%d found", sq, sq);
    return 0;
}//end main

