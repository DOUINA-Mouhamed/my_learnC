/*

Qu'est ce qu'un prototype de fonction ?

C'est une déclaration de fonction, vide, avant la fonction main()
Assure que l'appelle d'une fonction (elle même donc) soit fait avec un nombre correct d'arguments

Pourquoi les utiliser ?

Plusieurs compilateur C ne vérifie pas si les paramètres lors de l'appel sont correctes
Des arguments manquants peuvent provoquer des comportements innatendus lors de l'exécution

Quels sont leurs avantages ?

Plus facile de naviguer dans le programme avec la fonction main en haut
Aide au debuggage
Souvent utilisé dans les fichiers 'header' (my.h par exemple)

Compilation :

gcc -o prototype 2_function_prototype

*/

void bonjour(char name[], unsigned int age);

int main(void)
{
    bonjour("Hiro", 55);

    return 0; 
}

void bonjour(char name[], unsigned int age)
{
    printf("Bonjour %s !\n", name);
    printf("Tu as %d!\n", age);
}
