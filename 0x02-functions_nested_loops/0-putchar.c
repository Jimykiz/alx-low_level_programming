#include "holberton.h"
/**
 * main - main function
 *
 * Return: will return (0) if success
 */
int main(void)
{
char *holberton = "Holberton";
while (*holberton)
{
_putchar(*holberton);
holberton++;
}
_putchar('\n');
return (0);
}
