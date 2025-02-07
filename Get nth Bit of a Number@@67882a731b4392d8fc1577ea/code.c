#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    // Check the nth bit using bitwise AND
    int bit = (num >> n) & 1;
    
    printf("%d\n", bit);  // Output the nth bit (0 or 1)
    
    return 0;
}