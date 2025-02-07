#include <stdio.h>
#include <math.h>

int main() {
    int num, root;
    scanf("%d", &num);

    if (num < 0) {
        printf("not square\n"); // Negative numbers cannot be perfect squares
        return 0;
    }

    root = (int)sqrt(num); // Find the integer square root

    printf("%s\n", (root * root == num) ? "Yes" : "No");

    return 0;
}