/*

Nous allons parler des 'return statements'.
Un return est une instruction utilisée pour
renvoyer une valeur à partir d'une fonction à l'endroit où elle a été appelée.
Lorsqu'une fonction atteint une instruction 'return', elle arrête don exécution
et renvoie la valeur spécifiée dans l'instruction 'return'.
Ce cours complète bien la partie '05_functions'.

Compilation :

gcc -o arguments arguments.c

*/

double square(double x)         // Le type de fonction change selon le ce que l'on veut return.
{
    //double result = x * x;
    //return result;            // Ici on return result, qui est un double, donc la fonction est de type double.

    return x * x;               // Manière plus optimisée
}                               // Si l'on veut retourner un char, la fonction sera de type 'char', avec un int pareil, etc...

int main(void)
{
    double x = square(10);      // Grande valeur
    printf("%lf\n", x);

    return 0;                   // Retour de '0' et main est de type int
}