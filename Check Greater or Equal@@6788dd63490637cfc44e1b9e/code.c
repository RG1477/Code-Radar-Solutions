#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("greater\n");
    } else if (a < b) {
        printf("smaller\n");
    } else {
        printf("equal\n");
    }

    return 0;
}