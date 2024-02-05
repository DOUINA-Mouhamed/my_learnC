#include <stdio.h>
#include <ctype.h>

int my_temp(void)
{
    char unit;
    float temp;

    printf("What is the unit ? 'C' for Celsius and 'F' for Fahrenheit : ");
    scanf("%c", &unit);
    unit = toupper(unit);

    if (unit == 'C') {
        printf("The temperature is currently in Celsius.\n");
        printf("Enter the temperature : ");
        scanf("%f", &temp);
        temp = temp * 9 / 5 + 32;
        printf("The temperature is %.2f Fahrenheit.\n", temp);
    } else if (unit == 'F') {
        printf("The temperature is currently in Fahrenheit.\n");
        printf("Enter the temperature : ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("The temperature is %.2f Celsius.\n", temp);
    } else {
        printf("The temperature unit is wrong.\n");
        return 84;
    }
}

int main(void)
{
    my_temp();
    return 0;
}