#include <stdio.h>

void odd_even() {

     int n;
    scanf("%d", &n);

      int arr[n];

    for(int i= 0;i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int even_count = 0;
    int odd_count = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i]%2 != 0) {
            odd_count++;
        } else {
            even_count++;
        }
    }
    printf("%d %d",even_count,odd_count);
}


int main() {
   
    odd_even();

    
    return 0;
}