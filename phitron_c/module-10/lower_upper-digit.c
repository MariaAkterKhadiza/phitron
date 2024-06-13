#include <stdio.h>

int main()
{
    // char ch;

    // /* Input character from user */
    // printf("Enter any character: ");
    // scanf("%c", &ch);


    // /* Alphabet check */
    // if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    // {
    //     printf("'%c' is alphabet.", ch);
    // }
    // else if(ch >= '0' && ch <= '9')
    // {
    //     printf("'%c' is digit.", ch);
    // }
    // else 
    // {
    //     printf("'%c' is special character.", ch);
    // }

    // return 0;


    char str[100];
    int i;
    int upper=0,lower=0,special=0;;
    printf("Please enter the string \n");
    gets(str);
    
    // For Uppercase
    for(i=0; str[i] != '\0'; i++){
            if(str[i]>='A' && str[i]<='Z') {
                upper++;
    }
    
    // For Lowercase
    else if(str[i]>='a' && str[i]<='z') { 
               lower++;
    }
   
    // For special
    else{
        special++;
    }
    }
    printf("\nUpper case letters: %d",upper);
    printf("\nLower case letters: %d",lower);
    printf("\nSpecial characters: %d",special);
    //getch();
    return 0;
}