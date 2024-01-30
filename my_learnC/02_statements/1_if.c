/*

Un simple programme utilisons des if comme 
des conditions d'erreurs ou de réussite !

Compilation :

gcc -o if 1_if.c

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
    if (i >= 18) {          // Condition de réussite, absence de return 84
        printf("You can sign up to our program.\n");
    }
}

int main(void)
{
    bank_message();         // Appel de la première fonction
    user_input();           // Appel de la seconde fonction
    return 0;               // Réussite
}
