#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0) { // Ensures sides are positive
        if (a + b > c && a + c > b && b + c > a) {
            printf("Valid\n");
        } else {
            printf("Invalid\n");
        }
    } else {
        printf("Invalid\n"); // If any side is non-positive
    }

    return 0;
}