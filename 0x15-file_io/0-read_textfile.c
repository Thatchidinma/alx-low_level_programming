#include "main.h"

/**
  * read_textfile - read text file
  *
  * @filename: The file
  *
  * @letters: Number of letters to reads and prints
  *
  * Return: read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, r;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
	{
		return (0);
	}

	if (!filename)
	{
		return (0);
	}

	f = open(filename, O_RDONLY, 0600);
	if (f == -1)
	{
		return (0);
	}

	r = read(f, buff, letters);
	write(STDOUT_FILENO, buff, r);

	free(buff);
	close(f);
	return (r);
}
