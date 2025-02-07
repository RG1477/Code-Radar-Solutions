#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a ^ b;  // Step 1: a becomes a ^ b
    b = a ^ b;  // Step 2: b becomes a
    a = a ^ b;  // Step 3: a becomes b

    printf("a = %d, b = %d\n", a, b);

    return 0;
}