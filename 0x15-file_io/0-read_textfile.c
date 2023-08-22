#include "main.h"

/**
  * create_file - create file
  *
  * @filename: its name
  *
  * @text_content:its content
  *
  * Return: int
  */
int create_file(const char *filename, char *text_content)
{
	int i;

	if (!filename)
	{
		return (-1);
	}

	i = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		write(i, text_content, _strlen(text_content));
	}

	close(i);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  *
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int n = 0;

	while (s[n])
	{
		n++;
	}

	return (n);
}
