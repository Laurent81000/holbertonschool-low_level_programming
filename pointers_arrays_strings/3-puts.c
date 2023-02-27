#include "main.h"

/**
 * _puts - Affiche une chaîne de caractères sur stdout.
 *
 * @str: pointeur vers la chaîne de caractères à afficher.
 */
void _puts(char *str)
{
	int i = 0;

	/* parcourir chaque caractère de la chaîne */
	while (str[i] != '\0')
	{
		/* afficher le caractère courant sur stdout */
		_putchar(str[i]);
		i++;
	}
	/* afficher un caractère de saut de ligne à la fin de la chaîne */
	_putchar('\n');
}
