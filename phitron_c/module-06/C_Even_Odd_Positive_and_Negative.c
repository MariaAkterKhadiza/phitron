#include<stdio.h>
int main()
{   
    int n;
    scanf("%d",&n);
    int a;
    int even=0,odd=0,pos=0,neg=0;
    for(int i=1;i<=n;i=i+1)
    {
        scanf("%d", &a);
        //kaaj 
        if(a%2==0)
        {
            //even
            even++;
        }
        else 
        {
            
            odd++;
        }
         if(a<0)
        {
            pos++;
        }
        else if(a>0)
        {
            //negative
            neg++;
           
        }
      
       
    }
  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even,odd,neg,pos);

    return 0;
}