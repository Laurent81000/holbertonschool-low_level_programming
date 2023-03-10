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
	int i, j, sum;

	/* initialize sum to 0 */
	sum = 0;

	/* iterate through the arguments */
	for (i = 1; i < argc; i++)
	{
		/* iterate through each character in the argument */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* check if the character is not a digit */
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		/* convert the argument to an integer and add it to the sum */
		sum += atoi(argv[i]);
	}

	/* print the sum followed by a new line */
	printf("%d\n", sum);

	return (0);
}
