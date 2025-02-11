#include <stdio.h>

void number_pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // Print numbers with spaces
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
}

int main() {
    int n;
   
    scanf("%d", &n);
    number_pyramid(n);
    return 0;
}