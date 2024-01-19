/*

Petite précision pour les constantes qui sont juste
une sécurité pour que les valeurs d'une variable 
ne changent  pas au cours de l'exécution du programme

Compilation :

gcc -o constants 4_constants.c

*/

#include <stdio.h>

int main (void)
{
    int a = 5;
    a = 5 + a;

    const int b = 2;
    //b = 2;                        // vous pouvez ici enlever le premier commentaire et vous allez 
                                    // voir que le programme ne compile pas lorsqu'il y a un changement de constante

    printf("%d\n", a);
    printf("%d\n", b);
}