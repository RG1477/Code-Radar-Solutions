#include <stdio.h>

int main() {
    int num1;
    
    // Input a number
   
    scanf("%d", &num1);
    
    // Check logical NOT operation
    if (!(num1 > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
