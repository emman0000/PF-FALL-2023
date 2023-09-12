	// Programmar: Emman Abrar Ali
// 12/09/2023
// task 4 quadratic formula
#include<stdio.h>
#include <math.h>
main(){
	// take inputs from quadratic equation
double	a, b, c, d, r1, r2;
    printf("Enter coefficients a: ");
	scanf("%f",&a);
	printf("Enter coefficients b: ");
	scanf("%f",&b);
	printf("Enter coefficients c: ");
	scanf("%f",&c);
	
	// break down the formula
	
	d=(b*b-4*a*c);
	
	// input discriminant into roots
	r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);

printf("r1=%f",r1);
printf("r2=%f",r2);

return 0;
	
	
}
