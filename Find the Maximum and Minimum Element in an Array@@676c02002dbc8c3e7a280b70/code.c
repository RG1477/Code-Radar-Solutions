#include <stdio.h>

int main() {
    int n;
    
    // Read input size
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Initialize min and max with the first element
    int min = arr[0], max = arr[0];

    // Find min and max
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    // Output format: min max
    printf("%d %d\n", min, max);

    return 0;
}