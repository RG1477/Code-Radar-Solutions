#include <stdio.h>

int main() {
    int num1, num2, num3;
    double average;

    // Read three integers
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3.0;

    // Print the average with 2 decimal places
    printf("Average: %.2lf\n", average);

    return 0;}