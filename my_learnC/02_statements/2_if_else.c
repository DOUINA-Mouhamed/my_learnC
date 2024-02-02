/*

Un simple programme utilisant un if else comme 
condition d'erreur puis de réussite !

Compilation :

gcc -o if_else 2_if_else.c

*/

#include <stdio.h>

void bank_message(void)
{
    printf("You are here to sign-up to our program.\n");
    return;
}

int user_input(void)
{
    int i;
    
    printf("Enter your age : ");
    scanf("%d", &i);
    if (i < 18) {
        printf("You are not allowed to sign up to our program.\n"); // Erreur
        return 84;
    } else {
        printf("You can sign up to our program.\n");                // Réussite
    }
}

/*

if (*condition*)
{
    *code*
    return 84; // Si c'est une condition d'erreur
} else {
    *code*     // Si il n'y a pas d'erreur passage à la réussite
}

*/

int main(void)
{
    bank_message();         // Appel de la première fonction
    user_input();           // Appel de la seconde fonction
    return 0;               // Réussite
}
