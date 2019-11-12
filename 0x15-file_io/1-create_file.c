#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_file - writes the character n to stdout
 * @filename: name of the file to create
 * @text_content: is a string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int create_file(const char *filename, char *text_content)
{
int fd, i;

for (i = 0; text_content[i] != '\0'; i++)
	{
	}
if (filename == NULL)
        {
        return (-1);
        }
fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		{
		return (-1);
		}
if (text_content == NULL)
	{
	return (1);
	}
else
	{
	write(fd, text_content, i);
	}
close(fd);
return (1);
}
