/**
 *main - prints all single digit numbers of base 10 starting from 0
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
	j = i + '0'; /*convertir l'entier en caractère numérique*/
	putchar(j);
	i++;
	}
	putchar('\n'); /*afficher un caractère de nouvelle ligne*/

	i = 0;
	while (i < 10)
	{
	j = i + 10 + '0'; /*convertir l'entier en caractère numérique*/
	putchar(j);
	i++;
	}
	putchar('\n'); /*afficher un caractère de nouvelle ligne*/

	return (0);
}
