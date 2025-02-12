#include <stdio.h>

void printAlphabetPyramid(int n) {
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print ascending alphabets
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            printf("%c", ch);
        }

        // Print descending alphabets
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--) {
            printf("%c", ch);
        }

        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);

    printAlphabetPyramid(n);
    return 0;
}