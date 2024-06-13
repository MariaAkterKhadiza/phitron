#include<stdio.h>
int main()
{
    int N;
     printf("enter the number : ");
    scanf("%d", &N);
   
    
    if(N % 3 == 0)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }

    return 0;
}