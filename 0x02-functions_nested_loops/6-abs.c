#include "main.h"



/**
 * print_sign - compute the absolute value.
 *
 * @n: to be checked
 *
 * * Return: Always 0.
 */

int print_sign(int n)

{

		if (n > 0)
		{
		_putchar('+');
		return (1);
		}
		else if (n < 0)
		{
			_putchar('_');
			return (-1);
		}
		else
			{
			_putchar('0');
			return (0);
			}

}