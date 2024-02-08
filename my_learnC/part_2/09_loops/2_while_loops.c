/*

Une boucle while est une boucle qui s'exécute indefiniment tant
qu'une condition n'est pas vraie, fausse ou remplie...

*/

#include <stdio.h>
#include <string.h>

void take_pseudo(const char *str)
{
    printf("Type your pseudo : ");
    scanf("%s", str);

    return;
}

int main (void)
{
    const char *pseudo;
    take_pseudo(pseudo);
    while (strlen(pseudo) <= 3) {
        printf("Pseudo must take at least 4 characters.\n");
        take_pseudo(pseudo);
    }
    printf("Your pseudo is '%s'.", pseudo);
    return 0;
}
