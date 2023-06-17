#include <stdio.h>

/**
 * main - prints out 0-9 using putchar
 * Return: always return 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar((c % 10) + '0');
	}
	putchar('\n');
	return (0);
}
