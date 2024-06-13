#include<stdio.h>
int main()
{   
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    long long int d;
    scanf("%lld", &d);

    if((a+b*c==d || a+b-c==d || a-b+c==d || a-b*c==d || a*b*c==d || a*b-c==d))
       {
        printf("YES\n");
       }
       else{
         printf("No\n");
       }

    return 0;
}

///or

#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    if(a + b * c == d){
        printf("YES");
    }
    else if(a + b - c == d){
        printf("YES");
    }
    else if(a - b + c == d){
        printf("YES");
    }
    else if(a - b * c == d){
        printf("YES");
    }
    else if(a * b + c == d){
        printf("YES");
    }
    else if(a * b - c == d){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}