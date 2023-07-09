#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 arguments passed to program
 *
 * @argc: argument count
 *
 * @argv: argument vector (string of arguments)
 *
 * Return: 1 if the program recieves two arguments and error if it doesnt
 */
int main(int argc, char *argv[])
{
	int multiply;

	if (argc == 3);
	{
		multiply = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiply);
		return (1);
	}
	else
	{
		return (Error);
	}
}
