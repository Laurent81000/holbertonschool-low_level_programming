#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
    int i, j;
    char temp;

    j = _strlen(s) - 1;

    for (i = 0; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
