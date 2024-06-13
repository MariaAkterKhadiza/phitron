#include<stdio.h>
#include<string.h>

int is_palindrome(char *s,int len){

    int i = 0;
    int j = len -1;
    int k = 1;
   
    while (i<j)
    {
       if(*(s+i) != *(s+j)){
        k = 0;
       }
       i++;
       j--;
    }
    return k;
}
int main(){
    char s[1000];
    scanf("%s",s);
    int len = strlen(s);

  int poli =  is_palindrome(s,len);

  if(poli){
    printf("Palindrome\n");
  }else{
    printf("Not Palindrome\n");
  }
    return 0;
}