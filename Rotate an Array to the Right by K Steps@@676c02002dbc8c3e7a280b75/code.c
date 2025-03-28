#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;
    
    // Read the size of the array
    scanf("%d", &n);
    int arr[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Read the number of rotations
    scanf("%d", &k);

    // Optimize k
    k = k % n;

    // Reverse the whole array
    reverse(arr, 0, n - 1);
    
    // Reverse the first k elements
    reverse(arr, 0, k - 1);
    
    // Reverse the remaining elements
    reverse(arr, k, n - 1);

    // Print the rotated array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}