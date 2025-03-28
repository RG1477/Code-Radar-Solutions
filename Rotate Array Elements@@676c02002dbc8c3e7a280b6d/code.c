#include <stdio.h>

// Function to reverse a part of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate array to the right by K positions
void rotateArray(int arr[], int n, int k) {
    k = k % n;  // Handle cases where K > N

    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);

    // Step 2: Reverse the first K elements
    reverse(arr, 0, k - 1);

    // Step 3: Reverse the remaining N-K elements
    reverse(arr, k, n - 1);
}

// Function to print the array (one number per line)
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);  // Print each number on a new line
}

// Main function
int main() {
    int n, k;
    
    // Read input size
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Read number of rotations
    scanf("%d", &k);

    // Rotate array
    rotateArray(arr, n, k);

    // Print rotated array (one number per line)
    printArray(arr, n);

    return 0;
}