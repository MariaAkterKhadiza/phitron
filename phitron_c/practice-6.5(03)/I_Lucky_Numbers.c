#include<stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    int x = number % 10;
    int y = number / 10;
    if(x % y == 0 || y % x == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}