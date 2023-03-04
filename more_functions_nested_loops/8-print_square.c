#include "main.h"

/**
 * draw_line - draws a line
 * @width: of the line, strictly positive
 *
 * Description: does nothing if width negative or null.
 */
void draw_line(int width)
{
	for (; width > 0; width--)
		_putchar('#');
}

/**
 * print_square - prints a square
 * @size: width of the square
 *
 * Description: does nothing if size negative or null
 */
void print_square(int size)
{
	int width;

	if (size <= 0)
	{
		_putchar('\n');
	}

	width = size;

	for (; size > 0; size--)
	{
		draw_line(width);
		_putchar('\n');
	}
}
