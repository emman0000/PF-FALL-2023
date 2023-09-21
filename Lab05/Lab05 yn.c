// Programmer Emman Ali
// Lab 05 9/19/23
// This is a yes or no program
#include<stdio.h>
main(){
char ans;
printf(" Are you sure you would like to delete this? [Y/y],[N/n]");
scanf("%c",& ans);

 switch (ans)
 {
 case 'Y':
 printf("Ans deleted");
 break;
 case 'y':
 printf("Ans deleted");
 break;
 case 'N':
 printf("Ans not deleted");
 break;
 case 'n':
 printf("Ans not deleted");
 break;
 
 default:
 printf("Choose the right option bro");
 
 }// end switch
return 0;
}//end main
