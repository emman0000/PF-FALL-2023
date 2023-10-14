//Programmer Emman Ali
//Lab06 This program increments the value of a till the value of b after taking input for both numbers from the user
//This program also helps determine if the number is even or odd as long as it is greater than 9.
//10/14/23.
#include<stdio.h>
main(){
int a,b,i=0;
printf("Enter a value a=",a);
scanf("%d",&a);
printf("Enter a value b=",b);
scanf("%d",&b);
printf("Increasing a till it becomes equal to b...");
while (a<b){
i++;
i<=b;	
a=i;	
}//end while

printf("\na is now= %d", i);
// Print values of a till its less than 10 in English
if (a<=9){
    	switch(i)
		{
			case 0:
				printf("\nZero,");
				break;
			case 1:
				printf("\nOne,");
				break;
			case 2:
				printf("\nTwo");
				break;
			case 3:
				printf("\nThree");
				break;
			case 4:
				printf("\nFour");
				break;
			case 5:
				printf("\nFive");
				break;
			case 6:
				printf("\nSix");
				break;
			case 7:
				printf("\nSeven");
				break;
			case 8:
				printf("\nEight");
				break;
			case 9:
				printf("\nNine");
				break;
			
			
}//end switch
}//end if 
// check for even and odd numbers if a is greater than 9
if (a>9){
    if (a%2==0){
	printf("\n%d is even",a);
}//end if 
else{
	printf("\n%d is odd",a);
	
}//end else
}//end if 

}//end main
