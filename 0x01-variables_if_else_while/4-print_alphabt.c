#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: will return (0) if success
 */

int main(void)

{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
{
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}
