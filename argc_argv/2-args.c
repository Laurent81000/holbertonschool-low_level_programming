#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, length = 0;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		/* add 1 for the newline character */
		length += strlen(argv[i]) + 1;
	}

	/* print the program name as the first line of output */
	printf("%s\n", argv[0]);

	/* print the length of the output (not including the program name) */
	fprintf(stderr, "%d chars long\n", length);

	return (0);
}
