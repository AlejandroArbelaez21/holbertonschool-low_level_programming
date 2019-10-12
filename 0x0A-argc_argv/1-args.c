#include <stdio.h>
#include <stdlib.h>
#define notused(a) (void)(a)
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
notused(argv);

	printf("%d\n", argc - 1);
return (0);
}
