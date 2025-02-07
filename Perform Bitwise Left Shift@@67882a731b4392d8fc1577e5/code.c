#include <stdio.h>

int main() {
    int num, shift;
    scanf("%d %d", &num, &shift);
    printf("%d\n", num << shift);  // Bitwise left shift operation
    return 0;
}