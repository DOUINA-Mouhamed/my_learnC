/*

Un simple programme utilisant des else if comme 
des conditions d'erreurs ou de réussite !

Compilation :

gcc -o else_if 3_else_if.c

*/

#include <stdio.h>

void bank_message(void)     // On commence à écrire plusieurs fonctions pour pouvoir séparer chaque action
{
    printf("You are here to sign-up to our program.\n");
    return;
}

int user_input(void)
{
    int i;
    
    printf("Enter your age : ");
    scanf("%d", &i);
    if (i < 18 && i >= 0) { // Première condition d'erreur
        printf("You are not allowed to sign up to our program.\n");
        return 84;
    }
    if (i < 0) {            // Deuxième condition d'erreur un peu plus recherchée
        printf("Negative number detected.\n");
        return 84;          // De manière générale on return 1 pour les erreurs
    }
    if (i > 18) {          // Condition de réussite, absence de return 84
        printf("You can sign up to our program.\n");
    } else if (i = 18) {
        printf("You just turned 18 this year, congratulations ! You can sign up to our program.\n");
    }
}

/*

if (*condition*)
{
    *code*
    return 84;  // Si c'est une condition d'erreur
} else if (*condition*) {
    *code*
    return 84;  // Si il faut marquer une autre erreur plus spécifique par exemple.
}

*/

int main(void)
{
    bank_message();
    user_input();           
    return 0;               
}
