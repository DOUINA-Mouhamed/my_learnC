#include <stdio.h>

int prices()
{
    int age;
    int popcorn;
    float p;

    printf("To buy a ticket, enter your age : ");
    scanf("%d", &age);

    if (age >= 13) {
        p = 10.99;
    } else if (age < 13 && age >= 0) {
        p = 4.99;
    }
    printf("Price will be %0.2f$\n", p);
    
    printf("A bag of popcorn is 2$. You can have a maximum of 3 bags.\n");
    printf("How many bags do you need ? ");
    scanf("%d", &popcorn);
    if (popcorn == 1) {
        p = p + 2;
    } else if (popcorn == 2) {
        p = p + 4;
    } else if (popcorn == 3) {
        p = p + 6;
    }
    
    printf("Total price is %0.2f$\n", p);
    return 0;
}

int main(void)
{
    prices();
    return 0;
}