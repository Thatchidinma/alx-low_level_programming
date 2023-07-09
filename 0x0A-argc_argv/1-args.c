#include <stdio.h>
#include <stdlib.h>

/**
 * main - print out argc
 *
 * @argc: argument count
 *
 * @argv: argument vectot (string of arguments)
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
