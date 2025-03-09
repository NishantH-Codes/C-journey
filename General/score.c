#include <stdio.h>
float average(int N,int array[]);
int main(void)
{
    int N=5;

    int score[N];
    printf("Enter the scores of 5 subs\n");

    for(int i=0;i<N;i++)
    {
        scanf("%d",&score[i]);
    }
    printf("Average=%f\n",average(N,score));

}
float average(int N,int array[])
{
    int sum=0;
    for (int i=0;i<N;i++)
    {
        sum+=array[i];   
    }
    return (float)sum/N;
}