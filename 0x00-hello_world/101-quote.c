#include <stdio.h>
#include <unistd.h>

/**
 * main - contains all the blocks of code
 * write: prints out to the standard error
 * Return: end program
 */
int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar,", 19);
	write(STDERR_FILENO, " 2015-10-19\n", 19);
	return (1);
}
