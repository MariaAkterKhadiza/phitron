
#include<stdio.h>
#include<string.h>

 int main()
 {   char a[100];
     scanf("%s",a);
     

   /***  int count = 0;
     int i = 0;
      while(a[i] != '\0')
      {
        count++;
        i++;
      }**/
   
  int st = strlen(a);
  printf("%d\n",st);
// printf("%d\n",count);
    return 0;
 }