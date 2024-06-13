#include<stdio.h>
int main()
{

    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int N;
        scanf("%d",&N);
        int arr[N];
        for(int j=0; j<N; j++)
        {
            scanf("%d",&arr[j]);
        }
        int arr2[N];
        for(int j=0; j<N; j++)
        {
            arr2[j] = arr[j];
        }
        for(int j=0; j<N-1; j++)
        {
            for(int k=j+1; k<N; k++)
            {
                if(arr2[j] > arr2[k])
                {
                    int temp = arr2[j];
                    arr2[j] = arr2[k];
                    arr2[k] =temp;
                }
            }
        }

        int arr3[N];
        for(int j=0; j<N; j++)
        {
            arr3[j] = abs(arr[j] - arr2[j]);
        }
        for(int j=0; j<N; j++)
        {
            printf("%d ", arr3[j]);
        }
        printf("\n");
    }
    return 0; 
}