#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("Both\n");
    } else if (num % 3 == 0) {
        printf("Three\n");
    } else if (num % 5 == 0) {
        printf("Five\n");
    } else {
        printf("Neither\n");
    }

    return 0;
}