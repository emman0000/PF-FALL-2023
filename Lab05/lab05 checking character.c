//Programmer Emman Abrar Ali
// Calculator using switch
#include<stdio.h>
main(){
char input;
while (1){
scanf("%c",&input);
int temp=input;
// Check for letter
if (temp>=97&& temp<=122){
	printf("%c= is in small case\n",input);
}// end for no caps case

if (temp>=65&& temp<=90){
	printf("%c= is in CAPS\n",input);
	
 }// end for all caps
 
 if (temp>=65&& temp<=90){
	printf("%c= is in CAPS\n",input);
	
}
// check for number
if (temp>=48&& temp<=57){
	printf("%c= is a number\n",input);
}// end for number

// check for special characters
if (temp>=32&& temp<=47){
	printf("%c= is a special character\n",input);
	// end for characters
}// end special character check
return 0;
}//end main
}
