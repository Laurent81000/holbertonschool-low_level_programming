#include <stdio.h>

/**
 * main - Entry point. Prints all arguments it receives
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments passed to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	/* Print the name of the script */
	printf("%s\n", argv[0]);

	/* Print all other arguments */
	for (i = 1; i < argc; i++)
	{
		printf("%s", argv[i]);

		if (i != argc - 1)
			printf("\n");
	}

	return (0);
}
