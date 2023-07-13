#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 *
 * @argc: argument count
 *
 * @argv: argument vector (string of argument)
 *
 * Return: 0 if no argument, 1 if string contains non-digits
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, number;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}

			number = atoi(argv[i]);

			if (number > 0)
			{
				sum += number;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
