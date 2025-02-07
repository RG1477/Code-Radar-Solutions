#include <stdio.h>

void printBinary(int num) {
    int i;
    int started = 0; // To ignore leading zeros

    for (i = 31; i >= 0; i--) { // Loop through all 32 bits
        if (num & (1 << i)) { // Check if the bit is set (1)
            started = 1;
            printf("1");
        } else if (started) { // Print only after first '1' is found
            printf("0");
        }
    }

    if (!started) { // If num is 0, print "0"
        printf("0");
    }

    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);

    printBinary(num); // Call function to print binary representation
    return 0;
}