#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Take input from user

    for (int i = 1; i <= n; i++) {
        // Print spaces for centering
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}