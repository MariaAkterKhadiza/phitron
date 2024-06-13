#include <stdio.h>

int main() {
    
       int n;
       scanf("%d", &n);
       int pattern = (n+11)/2;
       int space = pattern -1;
       int star = 1;
       for(int i=0; i<pattern; i++)
       {
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        for(int j=0; j<star; j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star+=2;
       }

       for(int i= 0; i<5; i++)
       {
        for(int j=0; j<5; j++)
        {
            printf(" ");
        }
        for(int j=0; j<n; j++)
        {
           printf("*");
        }
        printf("\n");
       }

     
    return 0;
}
