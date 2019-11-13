#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - writes the character n to stdout
 * @argc: number of the program passed to the program
 * @argv: is a one-dimensional array of strings.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
char buf[1024];
int fd, fd1, fd2;
size_t num;

if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97); }
fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98); printf("%d\n", fd);}
fd1 = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fd1 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99); }
while ((num = read(fd, buf, 1024)) > 0)
	{fd2 = write(fd1, buf, num);
	if (fd2 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99); }
}
close(fd);
if (fd == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100); }
close(fd1);
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
	exit(100); }
return (0);
}

