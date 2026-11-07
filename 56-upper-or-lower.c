#include <stdio.h>

int main() {
    char ch;

    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase using ASCII ranges
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase alphabet.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
