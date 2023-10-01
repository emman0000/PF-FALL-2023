//programmer Emman Ali
// Quadratic Formula 
// 20/9/23
#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, root1, root2, rpart, ipart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
        printf("\nRoots are real and distinct");
    }

    // condition for real equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 =  %.2lf;", root1);
        printf("\nThere is only one real root");
    }

    // if roots are not real
    else {
        rpart = -b / (2 * a);
        ipart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", rpart, ipart, rpart, ipart);
        printf("\nroots  do not exist");
    }

    return 0;
}//end main
