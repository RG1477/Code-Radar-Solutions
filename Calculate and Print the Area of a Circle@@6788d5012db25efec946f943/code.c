#include <stdio.h>

int main() {
    float radius, area;
    
    // Input the radius
    scanf("%f", &radius);
    
    // Calculate the area of the circle
    area = 3.14 * radius * radius;
    
    // Print the result
    printf("Area: %.2f\n", area);
    
    return 0;
}