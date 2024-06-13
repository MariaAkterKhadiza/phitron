#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int a;
    int isExist = -1;
    scanf("%d", &a);
    for(int i=0; i<n; i++)
    {
        if(a==ar[i])
        {
            isExist = i;
            break;
        }
        
    }
     printf("%d",isExist);
    return 0;
}