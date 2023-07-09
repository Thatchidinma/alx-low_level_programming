#include <stdio.h>
#include <stdlib.h>

/**
 * main - print out all the argument the program recieves
 *
 * @argc: argument count
 *
 * @argv: argument vector (string of arguments)
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
