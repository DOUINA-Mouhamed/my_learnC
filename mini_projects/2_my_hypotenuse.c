#include <stdio.h>
#include <math.h>

int main (void)
{
    double A;
    double B;
    double C;

    printf("Write the size of side A in cm : ");
    scanf("%lf", &A);
    printf("Write the size of side B in cm : ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C is of lenght %0.2lf cm\n", C);
    
    return 0;
}