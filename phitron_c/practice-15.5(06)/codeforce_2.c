#include<stdio.h>
void number(int N)
{
    for(int i=1; i<=N; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
}
int main()
{
    int N;
    scanf("%d",&N);
    number(N);
    return 0;
}