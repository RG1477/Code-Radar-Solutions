#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];

    // Taking inputs
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your favorite hobby: ");
    scanf("%s", hobby);

    // Printing outputs
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}