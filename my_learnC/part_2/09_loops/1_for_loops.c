/*

Une boucle 'for' repète une section de code pendant un temps limité.

*/

#include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 10; i++) {
        printf("test %d\n", i);
    }
    return 0;
}