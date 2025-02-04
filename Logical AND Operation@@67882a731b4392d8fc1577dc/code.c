#include <stdio.h>
#include <stdbool.h>  // Include for bool, true, false

int main() {
    bool A, B, result;  // Boolean variables

    // Input two boolean values (0 for false, 1 for true)
    printf(" ");
    scanf("%d", &A);

    printf(" ");
    scanf("%d", &B);

    // Logical OR operation
    result = A || B;

    // Print result as true or false
    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}