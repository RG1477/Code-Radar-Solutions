#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int counted[n]; // To keep track of counted elements
    for (int i = 0; i < n; i++) 
        counted[i] = 0;

    // Count frequencies
    for (int i = 0; i < n; i++) {
        if (counted[i]) 
            continue; // Skip already counted elements
        
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = 1; // Mark as counted
            }
        }
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}