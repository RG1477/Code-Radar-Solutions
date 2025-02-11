#include <stdio.h>

int main() {
    char light;

    // Input traffic light color

    scanf(" %c", &light);

    // Traffic light simulation
    switch (light) {
        case 'R':
        case 'r':
            printf("Stop\n");
            break;
        case 'G':
        case 'g':
            printf("Go\n");
            break;
        case 'Y':
        case 'y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}