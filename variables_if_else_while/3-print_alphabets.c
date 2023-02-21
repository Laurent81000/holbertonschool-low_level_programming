/**
 * main - Program that prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void) {
    int i;

    // Print lowercase letters
    for (i = 97; i < 123; i++) {
        putchar(i);
    }

    // Print uppercase letters
    for (i = 65; i < 91; i++) {
        putchar(i);
    }

    // Print newline character
    putchar('\n');

    return 0;
}
