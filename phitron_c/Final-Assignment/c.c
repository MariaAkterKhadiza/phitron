#include <stdio.h>

int main() {
    int n = 5; // Set n to the desired size of the diamond

    // Print upper half of the diamond
    for (int i = 0; i < n; i++) {
        for (int space = 0; space < n - i - 1; space++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print bottom half of the diamond
    for (int i = n - 2; i >= 0; i--) {
        for (int space = 0; space < n - i - 1; space++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print five stars
    for (int i = 0; i < 5; i++) {
        for (int space = 0; space < n - 1; space++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
