#include <stdio.h>

void mirrored_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    mirrored_triangle(n);
    return 0;
}