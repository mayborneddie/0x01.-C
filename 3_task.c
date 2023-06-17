//Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line with putchar
#include <stdio.h>

int main() {
    char lowercase = 'a';
    char uppercase = 'A';

    // Print lowercase alphabet
    printf("Lowercase alphabet: ");
    while (lowercase <= 'z') {
        putchar(lowercase);
        lowercase++;
    }

    // Print uppercase alphabet
    printf("\nUppercase alphabet: ");
    while (uppercase <= 'Z') {
        putchar(uppercase);
        uppercase++;
    }

    putchar('\n');

    return 0;
}

