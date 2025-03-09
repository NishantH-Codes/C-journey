#include<stdio.h>
int main(void)
{
    //comparing 2 no.s
    int a,b;
    printf("Enter two numbers: ");
    scanf("%i,%i", &a, &b);
    if(a>b)
    {
        printf("%i is greater than %i\n", a, b);
    }
    else if(a<b)
    {
        printf("%i is less than %i\n", a, b);
    }
    else
    {
        printf("%i is equal to %i\n", a, b);
    }
    return 0;
}
