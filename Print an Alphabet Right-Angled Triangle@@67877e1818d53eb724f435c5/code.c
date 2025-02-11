#include <stdio.h>

void alphabet_triangle(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}

int main() {
    int n;

    scanf("%d", &n);
    alphabet_triangle(n);
    return 0;
}