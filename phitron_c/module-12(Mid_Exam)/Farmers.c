#include<stdio.h>
int main()
{
 int tC;
 scanf("%d", &tC);
 for(int i = 0; i < tC; i++)
 {
    int mn1,mn2,dy1;
    scanf("%d%d%d",&mn1,&mn2,&dy1);
    int newMn = mn1 + mn2;
    int newDy = (dy1*mn1)/newMn;
    int lessDy = dy1 - newDy;

    printf("%d\n",lessDy);
 }
    return 0;
}