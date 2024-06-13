#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int v = strcmp(a,b);
    printf("%d",v);
    if(v<0)
    {
        printf("A is smaller\n");
    }
    else if(v>0)
    {
        printf("B is smaller\n");
    }
    else
    {
        printf("same\n");
    }

    return 0;
}