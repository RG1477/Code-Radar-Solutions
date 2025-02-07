#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Perform bitwise NOT operation
    int flipped = ~num;

    printf("%d\n", flipped);  // Output the flipped number
    return 0;
}