#include <stdio.h>

int main() {
    int age;
    char citizen;
    
    scanf("%d %c", &age, &citizen);

    printf("%s\n", (age >= 18 && (citizen == 'Y' || citizen == 'y')) ? "Eligible" : "Not Eligible");

    return 0;
}