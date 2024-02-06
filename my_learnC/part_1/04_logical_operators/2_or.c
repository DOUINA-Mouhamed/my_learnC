/*

Ce fichier présente l'utilisation de l'opérateur logique '||'

Compilation :

gcc -o or 2_or.c

*/

#include <stdio.h>

int main(void)
{
    // || vérifie si une de deux conditions ou plus sont vraies
    
    float temp = 25;

    if (temp <= 0 || temp >= 30) {
        printf("The weather is bad!\n");
    } else {
        printf("The weather is  good!\n");
    }

    return 0;
}