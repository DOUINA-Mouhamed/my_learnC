/*

Ce fichier présente l'utilisation de l'opérateur logique '&&'

Compilation :

gcc -o and 1_and.c

*/

#include <stdio.h>
#include <stdbool.h>                            // La lib stdbool nous permet d'utiliser les booléens

int main(void)
{
    // && vérifie si 2 conditions ou plus sont vraies
    
    float temp = 25;
    bool sunny = false;                         // Initialisation de booléen

    if (temp >= 0 && temp <= 30 && sunny) {     // '&& sunny' = si sunny est vrai, dans ce cas là il est faux  
        printf("The weather is good!\n");
    } else {
        printf("The weather is bad!\n");
    }

    return 0;
}