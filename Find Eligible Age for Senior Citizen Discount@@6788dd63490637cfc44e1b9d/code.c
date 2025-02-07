#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    printf("%s\n", (age >= 60) ? "Eligible" : "Not Eligible");

    return 0;
}