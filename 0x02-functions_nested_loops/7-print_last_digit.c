#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 * @n: The number in question
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar('0' + last_digit);

		return (last_digit);

}
