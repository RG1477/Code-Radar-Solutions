#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("both\n");
    } else if (num % 3 == 0) {
        printf("three\n");
    } else if (num % 5 == 0) {
        printf("five\n");
    } else {
        printf("neither\n");
    }

    return 0;
}