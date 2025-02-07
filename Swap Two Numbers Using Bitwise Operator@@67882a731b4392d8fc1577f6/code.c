#include <stdio.h>

int main() {
    int a, b;

    // Taking input from the user
   
    scanf("%d %d", &a, &b);

   

    // XOR Swap Algorithm
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%d %d\n", a, b);

    return 0;
}