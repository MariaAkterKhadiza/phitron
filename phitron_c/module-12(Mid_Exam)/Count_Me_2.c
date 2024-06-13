#include<stdio.h>
#include <string.h>

int main()
{  
   char S[100001];
   scanf("%s",S);
   int vCount = 0, cCount = 0;

   for(int i= 0; i < strlen(S); i++)
   {
    if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
     {
        vCount++;
     }
     else if(S[i] >= 'a' && S[i] <= 'z')
     {
        cCount++;
     }
   }
     
   
   printf("%d",cCount);

    return 0;
}