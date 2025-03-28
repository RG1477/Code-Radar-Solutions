#include <stdio.h>

int main() {
    int n;
    
    // Read input size
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int even = 0, odd = 0;

    // Count even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Output format: even_count odd_count
    printf("%d %d\n", even, odd);

    return 0;
}