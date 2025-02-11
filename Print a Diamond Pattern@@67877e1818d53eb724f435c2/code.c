#include <stdio.h>

void print_diamond(int n) {
    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    print_diamond(n);
    return 0;
}