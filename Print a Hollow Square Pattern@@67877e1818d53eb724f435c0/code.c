#include <stdio.h>

int main() {
    int n;

    // Ask the user for the size of the square
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Inner loop for columns
        for (int j = 1; j <= n; j++) {
            // Print stars for first/last row and first/last column
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  "); // Space inside the square
            }
        }
        printf("\n");
    }

    return 0;
}