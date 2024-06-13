#include <stdio.h>
#include <string.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk<1000)
    {
        printf("i will buy panjabi");
         if(tk>=600)
        {
            printf("I will buy new shoes");
        }
        else{
            printf("Alisa will buy new shoes");
        }
    }
    else
    {
        printf("bad luck");
    }
}