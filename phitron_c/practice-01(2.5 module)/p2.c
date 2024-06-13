#include<stdio.h>
int main()
{
   int n,k;
   scanf("%d %d",&n,&k);

    //  printf("%d + %d = %d\n",n,k,n+k);
    // printf("%d - %d = %d\n",n,k,n-k);
    // printf("%d * %d = %d\n",n,k,n*k);
    ///printf("%d / %d = %.2lf\n",n,k,((n*1.0)/k));


    printf("%d + %d = %d\n",n,k, n+k);
    printf("%d - %d = %d\n",n,k,n-k);
    printf("%d * %d = %d\n", n,k,n*k);
    printf("%d / %d = %.2lf\n",n,k,((n*1.0)/k));

    return 0;
}