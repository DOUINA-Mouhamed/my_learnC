/*

Les switchs sont une alternatives beaucoup plus efficaces aux "}else if", ils sont plus
facile à lire et s'exécutent plus rapidement que les "else if".
Les switchs permettent de tester une valeur pour *égalité* contre plusieurs cas.

Compilation :

gcc -o switch 4_switch.c 

*/

#include <stdio.h>

int main(void)
{
    char grade;

    printf("Entrez votre grade (A, B, C, D ou E) : ");
    scanf("%c", &grade);

    switch (grade)              // "Pour certains cas de la variable grade" 
    {
    case 'A':                   // "Pour le cas 'A'"
        printf("GG !\n");
        break;                  // Si vous oubliez le break et que le cas est rempli ça ne s'arrêtera pas et les autres cas seront pris en compte.
    case 'B':                   // Prochain cas
        printf("Continue !\n"); 
        break;
    case 'C':
        printf("Tu peux faire mieux !\n");
        break;
    case 'D':
        printf("Au moins c'est pas un E !\n");
        break;
    case 'E':
        printf("Il faut se mettre en travail !\n");
        break;
    default:
        printf("Rentres un grade.\n");
        break;
    }
    return 0;
}
