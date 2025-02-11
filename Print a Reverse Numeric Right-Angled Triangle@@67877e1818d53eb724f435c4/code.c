#include <stdio.h>

void reverse_numeric_triangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
   
    scanf("%d", &n);
    reverse_numeric_triangle(n);
    return 0;
}