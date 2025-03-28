#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int first = INT_MIN, second = INT_MIN;

    // Find first and second largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    // If no second largest exists, print -1
    if (second == INT_MIN)
        printf("-1\n");
    else
        printf("%d\n", second);

    return 0;
}