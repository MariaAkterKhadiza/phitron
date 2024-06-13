#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(1%3==0 && 1%5==0)
        {
             printf("%d\n",i);
        }
    }
}