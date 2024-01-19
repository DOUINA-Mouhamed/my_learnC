/*

Découverte de la fonction 'scanf' et des inputs.
Jusqu'ici nous avons travaillé seulement sur des outputs.

Compilation :

gcc -o user_input 6_user_input.c

*/

#include <stdio.h>

int main(void)
{
    char name[25];                          // 25 bytes | 25 charactères maximum
    int age;

    printf("What's your name ?\n");
    //scanf("%s", &name);                   // scanf est assez limitée comme fonction, elle ne lira plus après un espace
    fgets(name, 25, stdin);                 // on peut utiliser fgets à la place, mais qui met un '\n' automatiquement à la fin de la variable name
    //name[strlen(name)-1] = '\0';          // pour palier à ce soucis on peut utiliser la fonction 'strlen' (longueur d'une chaîne de caractères, ici 'name')
                                            // et lui soustraire 1 (donc le \n) et définir que c'est la fin de notre chaîne de caractères ('\0')                        
    
    printf("\nHow old are you ?\n");
    scanf("%d", &age);

    printf("\nHello %s.\n", name);
    printf("You are %d years old.\n", age);

    return 0;
}
