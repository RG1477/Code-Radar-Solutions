#include <stdio.h>

void printReverseAlphabetTriangle(int n) {
    for (int i = 0; i < n; i++) {
        // Print alphabets from 'A' to (A + n - i - 1)
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}

int main() {
    int n;
   
    scanf("%d", &n);

    printReverseAlphabetTriangle(n);
    return 0;
}