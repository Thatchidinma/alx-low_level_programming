#include <stdio.h>

/**
 * main - contains all block of code
 * for loop: satisfy condition
 * printf: print out alphabets a-z
 * Return: always return 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	       	putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
