#include <stdio.h>

int main()
{
    int ti;
    scanf("%d", &ti);
    for (int i = 0; i < ti; i++)
    {
        int N;
        scanf("%d", &N);
        char str[N + 1];
        scanf("%s", str);
        int tWins = 0,pWins = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == 'T')
            {
                tWins++;
            }
            else if (str[i] == 'P')
            {
                pWins++;
            }
        };
        if (tWins > pWins)
        {
            printf("Tiger\n");
        }
        else if (tWins < pWins)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}
