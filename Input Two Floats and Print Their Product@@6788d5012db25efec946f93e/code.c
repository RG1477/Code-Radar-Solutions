#include <stdio.h>

int main() {
    float num1, num2, product;

   
    scanf("%f %f", &num1, &num2);

    // Calculate the product
    product = num1 * num2;

    // Output the product
    printf("Product: %.2f\n", product);

    return 0;
}