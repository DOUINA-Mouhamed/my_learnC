/*

Ce fichier contient plusieurs exemples sur comment
initialiser des variables, quelles sont leur type et
enfin comment les afficher.

Compilation :

gcc -o variables 1_variables.c

*/

#include <stdio.h>

int main(void)
{
    int x; // declaration
    x = 123; // initialisation
    int y = 123;

    int age = 21; // integer
    float gpa = 2.05; // floating point number
    char grade = 'C'; // single character
    char name[] = "Bro"; // array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your GPA is %0.2f\n", gpa);

    return 0;
}
