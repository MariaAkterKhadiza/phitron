#include <stdio.h>

int char_to_ascii(char alphabet)
{
    return alphabet;
}

int main() {
   char c;
   scanf("%c",&c);
   int get_the_ascii = char_to_ascii(c);
   printf("%d",get_the_ascii);

    return 0;
}
