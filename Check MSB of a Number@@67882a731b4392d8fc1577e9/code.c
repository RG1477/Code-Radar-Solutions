#include <stdio.h>
#include <stdint.h>

int main() {
    int num;
    scanf("%d", &num);

    // MSB mask for a 32-bit integer (1 at the 31st bit position)
    int msb_mask = 1 << 31;

    if (num & msb_mask)  // Check if MSB is 1
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}