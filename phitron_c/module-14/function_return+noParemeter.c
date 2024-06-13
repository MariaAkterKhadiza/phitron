#include<stdio.h>

int sum(void)
{
   int a,b;
   scanf("%d %d",&a,&b);
   int s=a+b;
   return s;
}

int main()
{
  int s=sum(100);
  printf("%d",s);
    return 0;
}