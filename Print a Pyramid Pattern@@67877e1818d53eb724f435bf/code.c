#include <stdio.h>

int main() {
    int rows;

    // Ask the user for the number of rows
   
    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}