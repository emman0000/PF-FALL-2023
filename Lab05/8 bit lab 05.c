//Programmer Emman Ali
// Tunring bits on and off program


#include<stdio.h>
main(){
	//initialise variables
int  n,bit4 ,bit7;

 	printf("enter an 8-bit number=\n",n);
 	scanf("%d",&n);
 	
 	bit4= 1000%10;
 	bit7=100000%10;
 	
 	if (bit4==1){
 	n=n-1000;	
	 }
 	else if (bit7==1){
 		n=n-100000;
	 }
 	
 	printf("%d",n);
 	
	
}//end main
