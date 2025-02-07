#include <stdio.h>

int main() {
    int temp;
    scanf("%d", &temp);

    printf("%s\n", (temp <= 0) ? "Freezing" : "Not Freezing");

    return 0;
}