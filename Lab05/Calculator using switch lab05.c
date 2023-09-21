//Programmer Emman Abrar Ali
// Calculator using switch
#include<stdio.h>
main(){
// declare op as a char variable
char op;
printf("Choose an Operator(+,-,*./)=\n");
scanf("%c",&op);
// Take input of numbers from user
int x,y,d;
printf("Enter number x:",x);
scanf("%d",&x);
printf("Enter number y:",y);
scanf("%d",&y);

switch(op){// start switch
	case'+':
		d=x+y;
	printf("%d",d);
	break;
		case'-':
		d=x-y;
	printf("%d",d);
	break;
		case'*':
		d=x*y;
	printf("%d",d);
	break;
		case'/':
		d=x/y;
	printf("%d",d);
	break;
default:
	printf("Bhai correct operator lagao!");
}// end switch

}// end main
