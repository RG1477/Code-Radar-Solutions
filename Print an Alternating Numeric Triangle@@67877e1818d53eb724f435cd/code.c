#include <stdio.h>

int main() {
    int n, start;
   
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        start = (i % 2 == 0) ? 1 : 0; // Alternate starting value

        for (int j = 0; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start; // Toggle between 0 and 1
        }
        printf("\n");
    }

    return 0;
}