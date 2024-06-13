#include<stdio.h>
int main()
{
   int n;
  
   int space = n-1;
   int star = 1;
   scanf("%d",&n);
   for(int i=1; i=(2*n)-1; i++)
   {
    for(int j=1; j<=space; j++)
    {
        printf(" ");
    }
    for(int k=1; k<=star; k++)
    {
        printf("*");
    }
    if(i<n-1)
    {
       space--;
       star = star+2;
    }
    else
    {
       space++;
       star = star - 2;
    }
    printf("\n");
   }
    return 0;
}