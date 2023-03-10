#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* check for the correct number of arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* convert the arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* perform the multiplication */
	result = num1 * num2;

	/* print the result followed by a new line */
	printf("%d\n", result);

	return (0);
}
