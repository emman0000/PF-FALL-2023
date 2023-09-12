#include<stdio.h>
main(){ 
// Programmar: Emman Abrar Ali
// 12/09/2023
//Print the pattern for any number of n

int n, i, r;
//ask for the number of rows
printf("Enter the number of rows you would like=",n);
scanf("%d", &n);

i=1;
while(i<=n) {
r=1;
while(r<=i) {
printf("*");
r++;
}
printf("\n");
i++;
}
return 0;
}//end main
