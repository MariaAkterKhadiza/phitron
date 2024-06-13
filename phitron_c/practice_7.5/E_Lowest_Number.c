#include<stdio.h>
int main()
{  int n;
   scanf("%d", &n);
   int arr[n];

   for(int i=0; i<n; i++)
   {
    scanf("%d", &arr[i]);
   }

   int min = arr[0];
   int minPosition = 1;
   for(int i=0; i<n; i++)
   {
    if(arr[i] < min)
    {
        min = arr[i];
        minPosition = i + 1;
    }
   }
     printf("%d %d", min,minPosition);
    return 0;
}