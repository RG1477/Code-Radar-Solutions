#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    printf("%s\n", (ch >= 'A' && ch <= 'Z') ? "Uppercase" : (ch >= 'a' && ch <= 'z') ? "Lowercase" : "Not an alphabet");
    return 0;
}