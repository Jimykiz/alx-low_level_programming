#include "main.h"
/**
 * print_sign - To check for a sign of value
 * @n: int for argument of the function
 * Return: 0
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
