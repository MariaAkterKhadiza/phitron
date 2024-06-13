#include<stdio.h>
int main()
{
    int tC;
    scanf("%d",&tC);
    for(int i = 1; i <= tC; i++)
    {
        char s[10001];
        scanf("%s",s);
        int capital = 0, small = 0, digit = 0;
        for(int i=0; i<=strlen(s); i++)
        {
            if(s[i] >= 65 && s[i] <= 90)
            {
                capital++;
            }
            else if(s[i] >= 97 && s[i] <= 122)
            {
                 small++;
            }
            else if(s[i] >= 48 && s[i] <= 57)
            {
                digit++;
            }
        }


        printf("%d %d %d\n",capital,small,digit);
    }

   
    return 0;

}