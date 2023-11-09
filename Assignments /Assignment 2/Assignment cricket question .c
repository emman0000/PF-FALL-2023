//Programmer Emman Ali
//Assignment 2 
//This program takes in the number of players and inninngs in a cricket match and delivers an analysis of the game play.

#include <stdio.h>

int main() {
   //decalring variables for number of batsmen and declaring a size for the performance array.
	int batsmen, innings, performance[1000][1000];
	 //taking input from the user 
	printf("How many batsmen were playing? ");
	printf("\n");
	scanf("%d", &batsmen);
	printf(" How many innings were there? ");
	printf("\n");
	scanf("%d", &innings);
//declaring variables for loop to find number of centureis and half centuries
//halfc - half centuary 50 runs and above
//c is centuary 100 runs and above
	int i , total, max, c, halfc;
	for (i = 0, total, max, c, halfc; i < batsmen; i++) {
		total = 0, max = 1 << 31, c = 0, halfc = 0;
		int j;
		for (j = 0; j < innings; j++) {
			printf("How much did batsmen %d score in  inning %d: ", i+1, j+1);
			scanf("%d", &performance[i][j]);
			total += performance[i][j];
			if (performance[i][j] > max) max = performance[i][j];
			if (performance[i][j] >= 100) c++;
			else if (performance[i][j] >= 50) halfc++;
		}//end j loop for innings 
		printf(" The number of total runs are:%d\n" ,total);
		printf(" The average number of runs is:%d\n" ,(float) total/innings);
			printf(" The highest runs made are:%d\n" ,max);
		printf(" The total number of centuries made :%d\n" ,c);
			printf(" The number of half centuries made :%d\n" ,halfc);
	}//end main i loop for all checks and conditions 
	
  
	return 0;
} //end main
