#include <stdio.h>

// Function to find majority element
int findMajorityElement(int arr[], int n) {
    int candidate = -1, count = 0;

    // Step 1: Find candidate using Boyer-Moore Voting Algorithm
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify if candidate is actually the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    return (count > n / 2) ? candidate : -1;
}

int main() {
    int n;
    
    // Read size of the array
    scanf("%d", &n);
    int arr[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Find and print the majority element
    printf("%d\n", findMajorityElement(arr, n));
    
    return 0;
}