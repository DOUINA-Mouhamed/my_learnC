/*

Introduction aux fonctions mathématique.

Compilation :

gcc -o math 7_math.c

*/

#include <stdio.h>
#include <math.h>           // pour utiliser les fonctions math il faut inclure la lib math.h

int main (void)
{
    double A = sqrt(9);     // racine carrée de 9
    double B = pow(2, 4);   // 2 puissance 4
    int C = round(3.14);    // arrondir 3
    int D = ceil(3.14);     // arrondir vers le haut
    int E = floor(3.99);    // arrondir vers le bas
    double F = fabs(-100);  // valeur absolue
    double G = log(3);      // logaritme
    double H = sin(45);     // sinus
    double I = cos(45);     // cosinus
    double J = tan(45);     // tangente

    //printf([...]); vous pouvez maintenant faire vous test vous mêmes !
    
    return 0;
}