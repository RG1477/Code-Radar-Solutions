#include <stdio.h>
#include <stdlib.h>

// Function to compare integers (for qsort)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find the longest consecutive sequence length
int longestConsecutive(int arr[], int n) {
    if (n == 0) return 0;

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int longest = 1, current = 1;

    // Traverse the sorted array
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            continue; // Ignore duplicates
        } else if (arr[i] == arr[i - 1] + 1) {
            current++; // Extend the sequence
        } else {
            longest = (current > longest) ? current : longest;
            current = 1; // Reset for new sequence
        }
    }
    return (current > longest) ? current : longest;
}

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Find and print the length of the longest consecutive sequence
    printf("%d\n", longestConsecutive(arr, n));

    return 0;
}