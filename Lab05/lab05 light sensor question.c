// Programmer Emman Ali
// 9/21/23
// Light sensor detection code

#include<stdio.h>
main(){
	int l,value;
	printf("Enter light value=\n");
	scanf("%d",&value);
	
	if ( value>=0 && value<100){
		printf("It's evening");
	}
	else if (value>=100 && value<=500){
		printf("Lighting");
	}
	else if (value>=500 && value<=1000){
		printf("Direct sun exposure");
	}	
	
}//end main
