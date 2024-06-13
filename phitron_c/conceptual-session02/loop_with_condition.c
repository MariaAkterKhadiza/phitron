#include<stdio.h>
int main()
{
    for(int i=1; i<=100; i++)
    {
        if(1%2==0)
        {
            printf("%d - even\n",i);
        }
        else
        {
            printf("%d - odd\n",i);
        }
    }
}