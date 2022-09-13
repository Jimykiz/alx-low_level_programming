#include <stdio.h>
/**
 * main - This is  the main function
 *
 * Return: it will return (0) if successful
 */
int main(void)

{
char ch;
char CH;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (CH = 'A'; CH <= 'Z'; CH++)
putchar(CH);
putchar('\n');
return (0);
}
