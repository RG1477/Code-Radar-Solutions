#include <stdio.h>

int main() {
    int temp;
    scanf("%d", &temp);

    printf("%s\n", (temp <= 0) ? "Freezing" : "Above Freezing");

    return 0;
}