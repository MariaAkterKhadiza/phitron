#include <stdio.h>


char small_to_capital(char alphabet)
{
    //return alphabet-32;  (small to capital)
    return alphabet+32;   ///(capital to small)
}

int main() 
{
    char c;
    scanf("%c",&c);
    char capital = small_to_capital(c);
    printf("%c",capital);
    
    return 0;
}
