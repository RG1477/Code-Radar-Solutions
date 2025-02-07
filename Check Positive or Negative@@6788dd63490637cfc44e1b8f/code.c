#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%s\n", (num >= 0) ? "Positive" : "Negative");
    return 0;
}