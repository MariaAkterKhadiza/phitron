#include<stdio.h>
int my_abs(int num)
{
    if(num<0)
    {
        return num* - 1;
    }
    else
    {
        return num;
    }
}
int main()
{
   int n;
   scanf("%d",&n);
   int val = my_abs(n);
   printf("%d",val);
    return 0;
}