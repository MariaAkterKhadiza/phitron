#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    printf("\n");

      if(ch>=97 && ch<122)
       {
            printf("%c", ch+1);
       }
     else if(ch==122)
        printf("%c", 97);
     
      else{
           printf("%c", ch);
       }

 
    
     
}