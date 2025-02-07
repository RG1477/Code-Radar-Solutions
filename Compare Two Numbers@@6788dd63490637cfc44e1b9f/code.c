#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is larger\n", a);
    } else if (a < b) {
        printf("%d is larger\n", b);
    } else {
        printf("Equal\n");
    }

    return 0;
}