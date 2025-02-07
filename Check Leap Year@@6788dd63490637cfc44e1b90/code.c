#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    printf("%s\n", (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? "Leap year" : "Not a leap year");
    return 0;
}