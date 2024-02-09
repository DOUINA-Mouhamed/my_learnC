/*

un 'do while loop' exécute d'abord un bloc de code, 
puis ensuite vérifie la condition.

*/

#include <stdio.h>

int main(void)
{
    int number = 0;
    int sum = 0;

    do {        // Initialisation de do
        printf("Enter a number above 0 or a negative one to exit : ");
        scanf("%d", &number);
        if (number > 0) {
            sum += number;
        }
    } while(number > 0);    // Vérification de condition après exécution
    printf("Sum : %d", sum);
    return 0;
}
