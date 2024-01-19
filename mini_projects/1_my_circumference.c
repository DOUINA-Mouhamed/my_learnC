/*

Solution à l'exercice "1_my_circumference"

*/

#include <stdio.h>

int main(void)
{
    const double PI = 3.14159;
    double radius;

    printf("Enter the radius of your circle : ");
    scanf("%lf", &radius);

    double C = PI * (2*radius);

    printf("\nThe circumference is : %0.2lf\n", C);
    return 0;
}