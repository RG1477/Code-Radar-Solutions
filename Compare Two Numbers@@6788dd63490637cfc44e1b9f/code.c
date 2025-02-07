#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%s\n", (a > b) ? "larger" : (a < b) ? "Larger" : "Equal");

    return 0;
}