#include <stdio.h>

int main() {
    int N;
    
    // Taking user input
  
    scanf("%d", &N);

    // Loop for printing the inverted triangle
    for (int i = N; i > 0; i--) {  // Outer loop for rows
        for (int j = 0; j < i; j++) {  // Inner loop for printing '*'
            printf("* ");
        }
        printf("\n"); // New line after each row
    }

    return 0;
}