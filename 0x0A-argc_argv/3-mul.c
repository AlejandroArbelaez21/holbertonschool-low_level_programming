#include <stdio.h>
#include <stdlib.h>
/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
int i;
if (argc == 3)
	{
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
	}
else
	{
	printf("Error\n");
	return (1);
	}
}
