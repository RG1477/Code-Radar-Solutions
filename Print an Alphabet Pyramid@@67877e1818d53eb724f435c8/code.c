#include <stdio.h>

void printAlphabetPyramid(int n) {
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print alphabets with spaces
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            printf("%c ", ch);
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