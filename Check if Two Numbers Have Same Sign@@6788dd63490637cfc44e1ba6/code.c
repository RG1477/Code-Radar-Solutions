#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    printf("%s\n", ((num1 >= 0 && num2 >= 0) || (num1 < 0 && num2 < 0)) ? "Same Sign" : "Different Sign");

    return 0;
}