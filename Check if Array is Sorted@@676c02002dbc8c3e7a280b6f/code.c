#include <stdio.h>

// Function to check if array is sorted
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;  // Not sorted
        }
    }
    return 1;  // Sorted
}

int main() {
    int n;
    
    // Read input size
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Check if sorted
    if (isSorted(arr, n))
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

    return 0;
}