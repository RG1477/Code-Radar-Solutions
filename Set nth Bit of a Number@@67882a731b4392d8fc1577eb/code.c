#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position
    
    scanf("%d", &num);
    
    
    scanf("%d", &n);

    // Set the nth bit
    num = num | (1 << n);

    // Print the updated number
    printf("%d\n", n, num);

    return 0;
}