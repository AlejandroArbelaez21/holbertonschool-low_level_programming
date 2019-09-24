#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c,h;
for (c = '0'; c <= '9'; c++)
{
        for (h = '0'; h <= '9'; h++)
{
        putchar(c);
        putchar(h);

        putchar(',');
        putchar(' ');

}
}
putchar('\n');

return (0);
}
