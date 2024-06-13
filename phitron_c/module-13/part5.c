#include<stdio.h>
int main()
{   int n;
 int digit = 1;
 scanf("%d",&n);
 for(int i=1; i<=n; i++)
 {
    for(int j=1; j<=digit; j++)
    {
        printf("%d ",j);
    }
    digit++;
    printf("\n");
 }
    return 0;
}
