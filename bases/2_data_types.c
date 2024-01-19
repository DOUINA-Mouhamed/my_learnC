/*

Voici une liste des différents types de 'data'
et comment les utiliser au sein de la fonction 'printf'. 

Compilation :

gcc -o data_types 2_data_types.c

*/

#include <stdio.h>                                  // cette librairie est initialisée pour que vous puissiez faire des test avec la fonction printf
#include <stdbool.h>                                // vous avez besoin d'initialiser cette librairie pour les booléens

int main (void)
{
    char a = 'C';                                   // charactère seul = %c
    char b[] = "Bro";                               // chaîne de charactère = %s

    float c = 3.141592;                             // nombre décimal = %f              32 bits     6 - 7 digits        4 bytes
    double d = 3.141592653589793;                   // nombre décimal double = %lf      64 bits     15 - 16 digits      8 bytes

    bool e = true;                                  // 1 byte (true = vrai ou alors false = faux) = %d

    char f = 100;                                   // avec un char, on peut stocker un nombre entier (1 byte) entre -128 et +127, %d pour montrer la valeur ASCII et %c pour le charactère
    unsigned char g = 255;                          // et avec un "unsigned", on exclu les négatifs et le nombre d'entre eux s'ajoute à +127 (donc 0 à 255) %d ou %c

    short int h = 32767;                            // 2 bytes (-32 768 à +32 767) %d
    unsigned short int i = 65535;                   // 2 bytes, avec la même logoque précédente (0 à 65 535);

    int j = 2147483647;                             // 4 bytes (-2 147 483 648 à 2 147 483 647) %d
    unsigned int k = 4294967294;                    // 4 bytes avec les mêmes logique précédentes %u

    long long int l = 922246545684168;              // 8 bytes (-9 à +9 quintillon) %lld
    unsigned long long int m = 66876841646846845U;  // 8 bytes (0 à 18 quintillon) %llu avec un 'U'à la fin pour éviter un warning

    printf("%c\n", a);
    // vous pouvez écrire le reste pour vous familiariser
}