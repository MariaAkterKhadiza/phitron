
//       *
//      **
//     ***
//    ****
//   *****
//  ******
// *******



// **********
//  *********
//   ********
//    *******
//     ******
//      *****
//       ****
//        ***
//         **
//          *
/**
 * C program to print mirrored right triangle star pattern series
 */

#include <stdio.h>

int main()
{   int n;
scanf("%d",&n);
int space = 1;
int star = n-1;
for(int i=1; i<=n; i++)
{
    for(int j=1; j<=space; j++)
    {
        printf(" ");
    }
    for(int k=1; k<=star; k++)
    {
        printf("*");
    }
    space++;
    star--;
    printf("\n");
}
    return 0;
}