//Programmer Emman Ali
// Discount and Price Calculator
//20/9/23

#include<stdio.h>
main(){
	float amount, discount, total;
    printf("How much money did you spend ? ",amount);
    scanf("%f", &amount);

    if(amount<=1999)
        printf("You have to pay: %0.2f", amount);
else 
{
if (2000 <=amount && amount<=4000){
	discount= (amount*0.2);
	total= (amount-discount);
	printf("Discount is: %0.2f",discount);
	printf("\n");
	printf("Total is : %0.2f\n",total);
}//end for 2000-4000

else if  	
	(4001 <=amount && amount<=6000){
	discount= (amount*0.3);
	total= (amount-discount);
	printf("Discount is: %0.2f",discount);
	printf("\n");
	printf("Total is : %0.2f\n",total);
}//end for 4001-6000

else if (6000 <amount ){
	discount= (amount*0.5);
	total= (amount-discount);
	printf("Discount is: %0.2f",discount);
	printf("\n");
	printf("Total is : %0.2f\n",total);
}//end for 6000
}//end for else 

}//end main
