#include<stdio.h>
int main()
{  //
         
        // *
        // * *
        // * * * 
        // * * * *
        // * * * * *


    //     int n;
    //     int star = 1;
    //     scanf("%d", &n);
    //      for(int i=1; i<=n; i++)
    //      {
    //         for(int j=1; j<=star; j++)
    //         {
    //            printf("*");
    //         }
    //        star++;
    //      printf("\n");
    //      }
    // return 0;

//    * * * * *
//    * * * *
//    * * *
//    * *
//    * 
//   int n;
//   scanf("%d",&n);
//   int k = 1;
//   for(int i=n; i>=1; i--)
//   {
//     for(int j=1; j<=i; j++)
//     {
//         printf("*");
//     }
//     k++;
//     printf("\n");
//   }
//   return 0;


//       *
//      * *
//     * * *
//    * * * *
//  * * * * * *

//   int n;
//   scanf("%d",&n);
//   int star = 1;
//   int space = n-1;
//   for(int i=1; i<=n; i++)
//   {
//      for(int j=1; j<=space; j++)
//      {
//         printf(" ");
//      }
//      for(int k=1; k<=star; k++)
//      {
//         printf("*");
//      }
//      printf("\n");
//      space--;
//      star +=2;
//   }
//   return 0;


//  *********
//   *******
//    *****
//     ***
//      *
//   int n; 
//   scanf("%d",&n);
//   int star = n*2 -1;
//   int space = 0;

//   for(int i=0; i<=n; i++)
//   {
//     for(int j=0; j<=space; j++)
//     {
//         printf(" ");
//     }
//     for(int k=1; k<=star; k++)
//     {
//         printf("*");
//     }
//     printf("\n");
//     star -=2;
//     space++;
//   }



//  1
//  1 2
//  1 2 3
//  1 2 3 4

//  int n;
//  int digit = 1;
//  scanf("%d",&n);
//  for(int i=1; i<=n; i++)
//  {
//     for(int j=1; j<=digit; j++)
//     {
//         printf("%d ",j);
//     }
//     digit++;
//     printf("\n");
//  }
//  return 0;


//   1 2 3 4 
//   1 2 3
//   1 2 
//   1


  int n;
  
  scanf("%d", &n);
  int digit = n;
  for(int i=1; i<=n; i++)
  {
    for(int j=1; j<=digit; j++)
    {
        printf("%d ",j);
    }
     printf("\n");
     digit--;
  }

 return 0;
}