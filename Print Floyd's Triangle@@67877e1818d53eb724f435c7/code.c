#include <stdio.h>

void printFloydTriangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);

    printFloydTriangle(n);
    return 0;
}