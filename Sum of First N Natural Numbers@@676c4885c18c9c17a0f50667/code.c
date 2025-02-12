#include <stdio.h>

int main() {
    int n, sum;
    
    scanf("%d", &n);

    sum = (n * (n + 1)) / 2; // Using the formula

    printf("%d\n", n, sum);
    return 0;
}