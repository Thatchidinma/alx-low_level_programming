
#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	char n;
	char c;

	for (n = 0; n < 10; n++)
		putchar(n);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
