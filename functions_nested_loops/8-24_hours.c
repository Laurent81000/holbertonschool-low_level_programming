#include "main.h"

#define HOURS 24
#define MINUTES 60

/**
 * jack_bauer - 00:00
 * @c: the caracter to check
 *
 * Description: BOOM !!!
 */
void jack_bauer(void)
{
	int hours = 0;
	while (hours < HOURS)
	{
		int minutes;
		for (minutes = 0; minutes < MINUTES; minutes++)
		{
			_putchar(hours / 10);
			print_last_digit(hours);
			_putchar(':');
			_putchar(minutes / 10);
			print_last_digit(minutes);
			_putchar('\n');	
		}
		hours++;
	}
}

int print_last_digit(int c)
{
        c %= 10; /* c = c % 10 */
        if (c < 0)
        {
                c = -c;
        }

        _putchar(c + 48);
	return(c);
}
