#include<stdio.h>
int main()
{
    int n;
    int post=0, neg=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
     for(int i=0; i<n; i++)
     {
        if(arr[i] > 0)
        {
            post = post+arr[i];
        }
        if(arr[i] < 0)
        {
            neg = neg+arr[i];
        }
     }
     printf("%d %d\n", post,neg);
    return 0;
}