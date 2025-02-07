#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) { // Triangle validity check
        if (a == b && b == c) {
            printf("Equilateral\n"); // All sides equal
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n"); // Any two sides equal
        } else {
            printf("Scalene\n"); // All sides different
        }
    } else {
        printf("Not a Triangle\n"); // Invalid triangle
    }

    return 0;
}