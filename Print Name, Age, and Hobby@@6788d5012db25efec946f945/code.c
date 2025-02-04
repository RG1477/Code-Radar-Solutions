#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];

    // Taking inputs
    printf(" ");
    scanf("%s", name);

    printf(" ");
    scanf("%d", &age);

    printf(" ");
    scanf("%s", hobby);

    // Printing outputs
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}