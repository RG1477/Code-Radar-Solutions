#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is larger\n");
    } else if (a < b) {
        printf("%d is larger\n");
    } else {
        printf("Equal\n");
    }

    return 0;
}