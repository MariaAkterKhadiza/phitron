#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int c = 1;
   int s = n-1;

    for(int i=1;i<=(n*2)-1;i++){

        for(int k=1;k<=s;k++){
            printf(" ");
        }
        for(int j=1;j<=c;j++){
            if(i%2==0){
                printf("-");
            }else{
                printf("#");
            }
        }
        if(i<n){
                s--;
                c+=2;
            }else{
                s++;
                c-=2;
            }
        printf("\n");
    }
    return 0;
}