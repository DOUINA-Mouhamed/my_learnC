/*

L'operateur 'ternary' est un raccourci pour utiliser un if/else quand on assigne/return une valeur

Formule :

(condition) ? value if true : value if false 

Compilation :

gcc -o tern 1_ternary_operator

*/

void c_value(void)
{
    int a = 10, b = 20, c;  // On initialise 3 variables à la fois, séparées par des virgules et de même type

    if (a < b) {
        c = a;
    } else {
        c = b;
    }
    printf("%d\n", c);
}                           // 10 lignes

void c_value_optimized(void)
{
    int a = 10, b =20, c;

    c = (a < b) ? a : b;    // " '(a < b) ?' veut dire : 'a est il inférieur à b ?'; '(c =)' si oui c = a, sinon '(:)' c = b"
    printf("%d\n", c);
}                           // 7 lignes

// Ces deux fonctions font exactement la même chose !

int main (void)
{
    c_value();
    c_value_optimized();
    return 0;
}
