/*

Ce fichier présente l'utilisation de l'opérateur logique '!'

Compilation :

gcc -o not 3_not.c

*/

#include <stdio.h>
#include <stdbool.h>                            // La lib stdbool nous permet d'utiliser les booléens

int main(void)
{
    // ! prend l'état inverse d'une condition
    
    float temp = 25;
    bool sunny = true;                           // Initialisation de booléen

    if (temp >= 0 && temp <= 30 && !sunny) {     // '!sunny' = si sunny n'est pas faux, dans ce cas là il est faux  
        printf("The weather is good!\n");
    } else {
        printf("The weather is  bad!\n");
    }

    return 0;
}