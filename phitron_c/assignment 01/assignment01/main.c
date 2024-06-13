#include <stdio.h>
#include <stdlib.h>

int main()
{

    //printf("Hello, world! I am learning C programming language. ^_^ \nProgramming is fun and challenging. /\\/\\/\\ \nI want to give my 100%% dedication to learn!	I will succeed one day.");

    int n;
    scanf("%d", &n);

     for(int i=21; i<=1000; i++)
     {
         if(n%3==0  &&  n%7==0)

          printf("%d\n", i);
     }
}
