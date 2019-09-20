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
int ch;
int ph;
for (ch = '0'; ch <= '9'; ch++)
{
for (ph = '0'; ph <= '9'; ph++)
{
putchar(ch);
putchar(ph);
if (ch == '9' && ph == '9')
{
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
