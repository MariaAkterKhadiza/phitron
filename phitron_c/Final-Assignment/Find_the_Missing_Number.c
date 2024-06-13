#include <stdio.h>
int main()
{  int T;
   scanf("%d", &T);
   while(T--)
   {
    long long int M,A,B,C;
    scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
    long long int miss_num  = M/ (A * B * C);
    long long int divide = M %  (A * B *C); 
  


    if(divide == 0)
    {
      printf("%lld\n",miss_num);
    }
    else
    {
       
           printf("-1\n");
    }
   }

    return 0;

}
