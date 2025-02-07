#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    if (num == 0) {
        printf("32\n");  // Special case: If num is 0, all bits are 0, so trailing zeros = 32
        return 0;
    }

    while ((num & 1) == 0) {  // Check if the LSB is 0
        count++;
        num >>= 1;  // Right shift to check the next bit
    }

    printf("%d\n", count);  // Output the count of trailing zeros
    return 0;
}