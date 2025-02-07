#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%s\n", (a >= b) ? "Yes" : "No");

    return 0;
}