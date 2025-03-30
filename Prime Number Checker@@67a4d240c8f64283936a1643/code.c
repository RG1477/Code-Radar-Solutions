#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num_cases, num;
    scanf("%d", &num_cases);
    
    for (int i = 0; i < num_cases; i++) {
        scanf("%d", &num);
        printf("%d\n", is_prime(num));
    }
    
    return 0;
}
