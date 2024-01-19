/*

Découverte des opérateurs et de leur fonctionnement

Compilation :

gcc -o arithmetic 5_arithmetic.c

*/

#include <stdio.h>

int main (void)
{
    // liste d'opérateurs :

    // +    (addition)
    // -    (soustraction)
    // *    (multiplication)
    // /    (division)
    // %    (modulo)
    // ++   (incrémentation)
    // --   (décrémentation)

    int x = 5;
    int y = 2;

    int z0 = x + y;
    int z1 = x - y;
    int z2 = x * y;

    int z3 = x / y;
    float z33 = x / (float) y;      // attention à bien donner à notre diviseur le type "décimal" avec float
    int z4 = x % y;

    // x++; ajoute 1 à x
    // y--; soustrait 1 à y

    // il existe aussi des raccourcis d'opérations

    // x += 5 qui signifie x = x + 5;
    // ... et c'est faisable avec les opérateurs que l'on vient de voir (sauf '++' et '--')

    printf("%d\n", z0);
    printf("%d\n", z1);
    printf("%d\n\n", z2);

    printf("%d\n", z3);
    printf("%.2f\n", z33);          // et ici le format %f avec le nombre de chiffre après la virgule souhaité ".X"
    printf("%d\n", z4);

    return 0;
}