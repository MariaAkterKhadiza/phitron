#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];

    for(int i=0;i<row; i++)
    {
        for(int j=0;j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

   // exact colum
   int c;
   scanf("%d",&c);
   for(int i=0;i<row;i++)
   {
    printf("%d ",a[i][c]);
   } for(int i=0;i<row; i++)
    {
        for(int j=0;j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }



    //row//
    //    int e;
    //    scanf("%d",&e);
    //    for(int i=0; i<col;i++)
    //    {
    //     printf("%d ",a[e][i]);
    //    }


   // for check ///
//  for(int i=0;i<row; i++)
//     {
//         for(int j=0;j<col; j++)
//         {
//             printf("%d",a[i][j]);
//         }
//         printf("\n");
//     }
    return 0;
}