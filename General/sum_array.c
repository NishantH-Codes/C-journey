#include <stdio.h>
int main(void)
{
    int arr1[]={5, 10, 15, 20, 25};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr1[i];
    }
    printf("Sum of the array is: %d",sum);
    return 0;
}