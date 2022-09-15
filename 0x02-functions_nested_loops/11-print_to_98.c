#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from input to 98.
 *
 * @n: the numbers to begin counting at.
 */
void print_to_98(98)
{

	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		print("%d\n", n);
	}

}
