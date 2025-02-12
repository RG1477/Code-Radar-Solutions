#include <stdio.h>

int main() {
    int n;
   
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces for centering
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n"); // Move to next row
    }

    return 0;
}