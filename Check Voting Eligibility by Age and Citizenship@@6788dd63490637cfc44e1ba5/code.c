#include <stdio.h>

int main() {
    int age, citizen;

    // Taking input for age and citizenship (1 for citizen, 0 for non-citizen)
    scanf("%d %d", &age, &citizen);

    // Check voting eligibility
    printf("%s\n", (age >= 18 && citizen == 1) ? "Eligible" : "Not Eligible");

    return 0;
}