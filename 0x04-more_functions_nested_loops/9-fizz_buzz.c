#include <stdio.h>
#include "holberton.h"
/**
 * main - function
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
int a;
	for (a = 1; a <= 100; a++)
	{
	if ((a % 3) == 0)
	printf("Fizz");
	}
	printf("%d ",a);
	putchar ('\n');
return(0);
}
