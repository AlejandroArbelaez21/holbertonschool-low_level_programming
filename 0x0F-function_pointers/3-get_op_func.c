#include "3-calc.h"
/**
 * get_op_func - writes the character n to stdout
 * @a: First number
 * @b: second number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
for (i = 0; i < 6; i++)
	{

	}
}
