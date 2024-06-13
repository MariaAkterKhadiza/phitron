#include<stdio.h>
int main()
{
   int r,c;
   scanf("%d %d",&r, &c);
   for(int i=1; i<=r; i++)
   {
    if(i%2 == 1)
    {
        for(int j=1; j<=c; j++)
        {
            printf("#");
        }
    }
    else
    {
       if(i%4 == 0)
       {
        printf("#");
        for(int i=2; i<=c; i++)
        {
            printf(".");
        }
       }
    }
   }
    
    return 0;  
}