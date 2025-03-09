#include <stdio.h>

int main(void)

{
    //Yes or NO
    char c;
    printf("Do you agree?");
    scanf("%c",&c);
    if (c=='Y' || c=='y')
    {
        printf("Agreed\n");
    }
    else if (c=='N' || c=='n')
    {
        printf("Not Agreed\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
    return 0;
}