/*

Une fonction est un petit segment de code qui est exécuté (appel de fonction)
Quand on compile des fichiers C, on commence avec un appel de la fonction 'main'

Compilation :

gcc -o functions 1_functions.c

*/

void bonjour(void)
{
    printf("Bonjour !\n");
    printf("Quelle belle journée !");
}

int main(void)
{
    bonjour();  // On appelle la fonction au lieu d'écrire dans le main
    bonjour();  // On peut l'appeller une nouvelle fois au lieu d'écrire
                // plusieurs fois la même chose
    return 0;
}
