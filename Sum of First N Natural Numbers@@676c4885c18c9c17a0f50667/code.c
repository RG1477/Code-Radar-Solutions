#include <stdio.h>

int main() {
    int n, sum = 0;  // Initialize sum to 0
    
    scanf("%d", &n);  // Take input from the user

    for (int i = 1; i <= n; i++) {
        sum += i;  // Add i to sum
    }

    printf("%d %d\n", n, sum);  // Print result
    return 0;
}