#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_textfile - writes the character n to stdout
 * @filename: name of the file
 * @letters: is the number of letters it should read and print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t num, num2;
char *buf;

buf = malloc(sizeof(char) * letters);
	{
	if (buf == NULL)
		{
		return (0);
		}
	}
if (filename == NULL)
	{
	return (0);
	}

fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
	return (0);
	}
	else
	{
	num = read(fd, buf, letters);
	if (num == -1)
		{
		free(buf);
		return (0);
		}
	num2 = write(STDOUT_FILENO, buf, num);
	if (num == -1)
		{
		return (0);
		free(buf);
		}
	}
close(fd);
return (num2);
}
