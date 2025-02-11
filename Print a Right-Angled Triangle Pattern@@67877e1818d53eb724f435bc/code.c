#include <stdio.h>

int main() {
    int rows;

    // Ask the user for the number of rows

    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = rows; i >= 1; i--) {
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}