#include <stdio.h>

int main() {
    int size, i, j;


    scanf("%d", &size);

    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size; j++) {
            // Print '*' only on the border positions
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}