#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d ",&A[i]);
    }

     if(n%2==0)
     {
        for(int i=n-1; i>0; i-=2)
        {
            printf("%d ", A[i]);
        }
     }
     if(n%2 != 0)
     {
        for(int i=n-2; i>0; i-=2)
        {
            printf("%d ", A[i]);
        }
     }
    return 0;
}