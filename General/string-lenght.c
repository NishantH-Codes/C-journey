#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word); 
    printf("Length of the string is %lu\n", strlen(word));
    return 0;
}


