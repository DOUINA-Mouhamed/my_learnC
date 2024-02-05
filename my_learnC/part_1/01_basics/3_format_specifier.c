/*

Voici une nouvelle liste qui présente les 
principaux formats et comment les utiliser.

Compilation :

gcc -o format_specifier 3_format_specifier

*/

#include <stdio.h>

int main (void)
{
    // format specifier % = définie et formate un type de data qui va être affiché

    // %c = charactère
    // %s = string
    // %d = nombre entier
    // %i = nombre entier
    // %f = nombre décimal
    
    float item1 = 5.75;
    float item2 = 10.55;
    float item3 = 100.99;

    printf("item 1 : €%.2f\n");         // %.2f nous permettra d'afficher que deux chiffres après la virgule
    printf("item 2 : €%f\n");           // ici il n'y aura pas de limite donné après le deuxième chiffre après la virgule, même si on a initialisé 10.55
}
