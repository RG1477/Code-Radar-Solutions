#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    printf("%s\n", (num >= 1 && num <= 100) ? "In Range" : "Out of Range");

    return 0;
}