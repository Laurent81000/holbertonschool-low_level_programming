/**
 * main - Program that prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void) 
{
    int i = 97;

    /*Print lowercase letters*/
    while (i < 123) 
    {
        putchar(i);
        i++;
    }

    i = 65;

    /*Print uppercase letters*/
    while (i < 91) 
    {
        putchar(i);
        i++;
    }

    /*Print newline character*/
    putchar('\n');

    return 0;
}
