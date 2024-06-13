#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    int numTwo = 0, numThree = 0, divisor = 0;

    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i=0; i<N; i++)
    {
        if(A[i]%2 == 0 && A[i]%3 != 0)
        {
            numTwo++;
        }
        else if(A[i]%2 == 0 && A[i]%3 == 0)
        {
           divisor++;
        }
        else if(A[i]%3 == 0 && A[i] %2 != 0)
        {
            numThree++;
        }
    }
  int last_numTwo = numTwo + divisor;
  printf("%d %d", last_numTwo,numThree);
    return 0;
}