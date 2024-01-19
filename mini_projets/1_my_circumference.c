/*

Solution à l'exercice "1_my_circumference"

*/

#include <stdio.h>

int main(void)
{
    const double PI = 3.14159;
    double D;

    printf("Enter the radius of your circle : ");
    scanf("%lf", &D);

    double C = PI * D;

    printf("\nThe circumference is : %0.2lf\n", C);
    return 0;
}