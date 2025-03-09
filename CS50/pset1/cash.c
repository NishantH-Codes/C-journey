#include <stdio.h>

int main(void)
{
    int cents;
    do
    {
        printf("Enter change owned :\n");
        scanf("%d", &cents);
    }
    while (cents < 0);
    int count = 0;
    while (cents >= 25)
    {
        cents -= 25;
        count++;
    }
    while (cents >= 10)
    {
        cents -= 10;
        count++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        count++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        count++;
    }
    printf("Coins=%d\n", count);
}
