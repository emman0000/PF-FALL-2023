	// Programmar: Emman Abrar Ali
// 12/09/2023
// task 5 bday

#include <stdio.h>
main(){
	int d1,d2,m1,m2,y1,y2;
	printf("Enter birth year for person 1=");
scanf("%d",&y1);
	printf("Enter nirth year for person 2=");
scanf("%d",&y2);

if(y1>y2){
	
	printf("Person 2 is older\n");
	}//end year condition
if (y1<y2) {
	printf("Person 1 is older\n");
}//end year condition if first one is false
	
	if (y1=y2){
		printf("enter month of person 1\n",m1);
		scanf("%d",&m1);
		
		printf("enter month of person 2\n",m2);
		scanf("%d",&m2);	
}// month condition
if(m1>m2){
	
	printf("Person 2 is older\n");
	}//end year condition
if (m1<m2) {
	printf("Person 1 is older\n");
}//end of months
if (m1=m2){
		printf("enter DOB of person 1\n",d1);
		scanf("%d",&d1);
		
		printf("enter DOB of person 2\n",d2);
		scanf("%d",&d2);} 
if(d1>d2){
	
	printf("Person 2 is older\n");
	}
if (d1<d2) {
	printf("Person 1 is older\n");
	}
	if (d1=d2){
		printf("Both are same age\n");
}
}
