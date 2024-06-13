#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int array[n];
    long long int sum = 0;

    long long int result;

    for(int i=0; i<n; i++)
    {
        scanf("%lld",&array[i]);
    }

     for(int i=0; i<n; i++)
     {
        sum = sum+array[i];
     }

      if(sum>0)
     {
       printf("%lld",sum);
        
       
     }
     else
     {
       printf("%lld",sum*-1);
       
     }
     
     return 0;
   
}