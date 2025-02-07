#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    printf("%s\n", (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? "Leap Year" : "Not a Leap Year");
    return 0;
}