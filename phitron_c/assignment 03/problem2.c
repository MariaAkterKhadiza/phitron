#include<stdio.h>

int main(){
    int number;
    
    scanf("%d",&number);

   int digit = 1;
    int space = number-1;

    for(int i=1;i<=number;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int k=digit;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
        space--;
        digit++;
    }
    return 0;
}