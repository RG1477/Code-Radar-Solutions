#include <stdio.h>
#include <math.h>

int main() {
    int num, root;
    scanf("%d", &num);

    if (num < 0) {
        printf("No"); // Negative numbers cannot be perfect squares
        return 0;
    }

    root = sqrt(num); // Find the square root of the number

    printf("%s\n", (root * root == num) ? "Yes" : "No");

    return 0;
}