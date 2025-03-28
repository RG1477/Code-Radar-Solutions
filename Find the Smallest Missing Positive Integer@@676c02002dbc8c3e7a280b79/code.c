#include <stdio.h>
#include <stdlib.h>

// Function to find the smallest missing positive integer
int findSmallestMissing(int arr[], int n) {
    // Create a boolean array to mark presence of numbers
    int presence[n + 1]; // Mark numbers from 1 to N
    for (int i = 0; i <= n; i++) {
        presence[i] = 0; // Initialize all as absent
    }

    // Mark the numbers that are present in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            presence[arr[i]] = 1;
        }
    }

    // Find the smallest missing positive number
    for (int i = 1; i <= n; i++) {
        if (presence[i] == 0) {
            return i;
        }
    }

    // If all numbers from 1 to N are present, return N+1
    return n + 1;
}

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Find and print the smallest missing positive integer
    printf("%d\n", findSmallestMissing(arr, n));

    return 0;
}