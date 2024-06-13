#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int tens = n / 10;
    int units = n % 10;
    if((units != 0 && n % units == 0) || (tens != 0 && n % tens == 0)  )
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}

