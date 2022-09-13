#include <stdio.h>
/**
 * main - main function
 *
 * Return: will return (0) if success
 */
int main(void)

{
int i;
int ch;
for (i = '0'; i <= '9'; i++)
putchar(i);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
