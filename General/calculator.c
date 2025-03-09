#include<stdio.h>
int add(int a, int b);
int main(void)
{
    printf("Enter the first number: ");
    int num1;
    scanf("%i",&num1);
    printf("Enter the second number: ");
    int num2;
    scanf("%i",&num2);
  
    printf("The sum is %i\n",add(num1,num2));
   return 0;
}
int add(int a, int b)
{
    return a+b;
}