#include <stdio.h>

int main() {
    int num, multiple;
    scanf("%d %d", &num, &multiple);
    
    printf("%s\n", (num % multiple == 0) ? "Yes" : "No");

    return 0;
}