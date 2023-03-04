#include "main.h"

/**
 * draw_line - draws a line of the triangle
 * @width: of the line, strictly positive
 *
 * Description: does nothing if width negative or null.
 */
void draw_line(int width, int num_spaces)
{
	int i;

	for (i = 0; i < num_spaces - 1; i++)
		_putchar(' ');

	for (; i < width; i++)
		_putchar('#');
}

/**
 * print_triangle - prints a triangle and prints a
 * newline.
 * @size: base of the triangle
 *
 * Description: does nothing if size negative or null
 */
void print_triangle(int size)
{
	int width;

	if (size <= 0)
	{
		_putchar('\n');
	}

	width = size;

	for (; size > 0; size--)
	{
		draw_line(width, size);
		_putchar('\n');
	}
}
