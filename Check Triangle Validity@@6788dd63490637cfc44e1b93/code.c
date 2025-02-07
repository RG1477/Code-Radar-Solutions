#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%s\n", (a + b > c && a + c > b && b + c > a) ? "Valid" : "Not valid");
    return 0;
}