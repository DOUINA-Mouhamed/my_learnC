/*

Nous allons parler des arguments et des paramètres.
Ce cours complète bien la partie '05_functions'.

Compilation :

gcc -o arguments arguments.c

*/

void bonjour(char name[], unsigned int age)     // Les paramètres d'une fonction sont ni plus ni moins que les types de variable
{                                               // que la fonction attend lorsqu'elle est appelée
    printf("Bonjour %s !\n", name);
    printf("Tu as %d ans !\n", age);
}

int main(void)
{
    char x[] = "Hiro";
    unsigned int y = 21;

    bonjour(x, y);                              // Ici on peut voir que x correspond bel et bien au type de variable de la fonction bonjour
}                                               // et que y aussi. Ainsi les variables de la fonctions main sont correctement envoyé à la fonction
                                                // bonjour, puis implémenté dans les phrases à l'output.
