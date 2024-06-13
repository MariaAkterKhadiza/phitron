#include <stdio.h>  
int main()  
{  
    //Counter variable to store the count of vowels and consonant  
   int i, vCount = 0, cCount = 0;  
   //char str[] = "maria";  
   for(i = 0; i < strlen(str); i++){  
      // str[i] = tolower(str[i]);  
       if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {  
           //Increments the vowel counter  
            vCount++;  
        }  
        else if(str[i] >= 'a' && str[i] <= 'z'){  
           // increments the consonant counter  
            cCount++;  
        }  
   }  
  // printf("Number of vowels : %d\n", vCount);  
   printf("Number of consonant : %d", cCount);  
   return 0;  
}   