#include<stdio.h>
int main()

 {  
    int n,k=1;
scanf("%d",&n);

for(int i=1; i<=n; i++)
{
    for(int j=1;j<=k;j++)
    {
        printf("*");
    }
    k++;
    printf("\n");
}

    return 0;

// reverse//
//   int i, j, rows;

//     /* Input number of rows from user */
//     printf("Enter number of rows : ");
//     scanf("%d", &rows);

//     /* Iterate through rows */
//     for(i=1; i<=rows; i++)
//     {
//         /* Iterate through columns */
//         for(j=i; j<=rows; j++)
//         {
//             printf("*");
//         }
       
//         /* Move to the next line */
//         printf("\n");
//     }


//  int n,k=1;
// scanf("%d",&n);

// for(int i=n; i>=1; i--)
// {
//     for(int j=1;j<=i;j++)
//     {
//         printf("*");
//     }
//     k++;
//     printf("\n");
// }

    // return 0;



}