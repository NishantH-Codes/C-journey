#include <stdio.h>
int main(void)
{
    // input
    long long int n;

    printf("Enter the credit card number: \n");
    scanf("%lld", &n);
    long long int old = n;

    // length of the card
    int length = 0;
    for (long long int i = n; i > 0; i /= 10)
    {
        length++;
    }

    // first digit
    long long int fd = n;
    while (fd >= 10)
    {
        fd /= 10;
    }

    // second digit
    long long int sd = n;
    while (sd >= 100)
    {
        sd /= 10;
    }

    // Checksum
    int sum = 0;
    int rem;
    int twice;
    n = old;

    for (int j = 0; j < length; j++)
    {
        n = n / 10;
        rem = n % 10;
        twice = rem * 2;

        if (twice > 9)
        {
            sum += twice % 10;
            sum += twice / 10;
        }
        else
        {
            sum += twice;
        }

        n = n / 10;
    }

    n = old;
    for (int k = 0; k < length; k++)
    {
        rem = n % 10;
        n = n / 10;
        sum += rem;
        n = n / 10;
    }

    if ((sum % 10) != 0)
    {
        printf("INVALID\n");
    }

    else
    {
        if ((length == 15) && ((sd == 34) || (sd == 37)))
            printf("AMEX\n");

        else if ((length == 16) && (sd >= 51 && sd <= 55))
            printf("MASTERCARD\n");

        else if ((length == 13 || length == 16) && fd == 4)
            printf("VISA\n");

        else
            printf("INVALID\n");
    }
}

