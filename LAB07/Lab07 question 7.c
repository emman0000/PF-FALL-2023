//Programmer Emman Abrar Ali
//This program multiplies a 2x2 matirx and then gives the product of those matrices as another matrix

#//Programmer Emman Abrar Ali
//This program multiplies a 2x2 matirx and then gives the product of those matrices as another matrix
#include<stdio.h>
int main() {

	int matrix1[2][2];
	int matrix2[2][2];
	int res[2][2];
	int i,j,p;
	printf("\nEnter 4 elements:\n");
	for(int i=0;i<2;i++) {
		for(int j=0;j<2;j++) 
			scanf("%d",&matrix1[i][j]);
		}

	printf("\nEnter 4 elements:\n");
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			int k=0;
			p =0;
			for(k=0;k<2;k++) {
				p = p+(matrix1[i][k]*matrix2[k][j]);
				res[i][j]=p;
			}
		}
	}
	printf("\nThe resultant matrix is:\n");
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			printf("%d\t", res[i][j]);
		}
		printf("\n");
	}
	}//end main
