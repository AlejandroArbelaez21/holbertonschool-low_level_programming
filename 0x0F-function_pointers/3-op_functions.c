#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - writes the character n to stdout
 * @a: First number
 * @b: second number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int op_add(int a, int b)
{
int add;
add = (a + b);
return (add);
}
/**
 * op_sub - writes the character n to stdout
 * @a: First number
 * @b: second number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int op_sub(int a, int b)
{
int sub;
sub = (a - b);
return (sub);
}
/**
 * op_mul - writes the character n to stdout
 * @a: First number
 * @b: second number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int op_mul(int a, int b)
{
int mul;
mul = (a * b);
return (mul);
}
/**
 * op_div - writes the character n to stdout
 * @a: First number
 * @b: second number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int op_div(int a, int b)
{
int div;
	if (a == 0 || b == 0)
	{
	printf("Error\n");
	exit(100);
	}
div = (a / b);
return (div);
}
/**
 * op_mod - writes the character n to stdout
 * @a: First number
 * @b: second number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int op_mod(int a, int b)
{
int mod;
	if (a == 0 || b == 0)
	{
	printf("Error\n");
	exit(100);
	}
mod = (a % b);
return (mod);
}
