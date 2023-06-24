#include <stdio.h>
#include <unistd.h>

/**
 * main - contains all the blocks of code
 * write: prints out to the standard error
 * Return: end program
 */
int main(void)
{
	write(STDERR_FILENO, "and that piece ", 15);
	write(STDERR_FILENO, "of art is useful\"", 18);
	write(STDERR_FILENO, " - Dora Korpar,", 15);
	write(STDERR_FILENO, " 2015-10-19\n", 11);
	return (1);
}
