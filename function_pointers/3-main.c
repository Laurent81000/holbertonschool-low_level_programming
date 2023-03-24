#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, exit with errors if arguments are invalid
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
char *op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = argv[2];

if ((op[0] == '/' || op[0] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}

result = get_op_func(op)(num1, num2);
printf("%d\n", result);

return (0);
}
