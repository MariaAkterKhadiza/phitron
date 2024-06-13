#include<stdio.h>
int main()
{    
    int num1,num2;
    scanf("%d %d", &num1,&num2);
    int result = num1 - num2;
      if(result > 0)
      {
        printf("%d", result);
      }
      else{
        printf("0");
      }
    return 0;
}