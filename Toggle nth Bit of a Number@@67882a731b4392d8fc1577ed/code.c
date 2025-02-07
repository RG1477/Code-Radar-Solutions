#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    // Toggle the nth bit using XOR
    num = num ^ (1 << n);

    printf("%d\n", num);  // Output the updated number
    
    return 0;
}