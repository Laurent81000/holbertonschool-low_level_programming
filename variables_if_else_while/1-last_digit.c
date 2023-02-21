/**
 *main - last digit of a random number
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;
	int last_digit_of;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit_of = n % 10;
        
	if (last_digit_of > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit_of);
	}
	else if (last_digit_of == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit_of);
	}
	else if (last_digit_of < 6 && last_digit_of != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			 n, last_digit_of);
	}

	return (0);
}
