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
char ch = '1';
char ch2 = '2';
for (ch = '0'; ch <= '9'; ch++)
putchar(ch);
for (ch2 = 'a'; ch2 <= 'f'; ch2++)
putchar(ch2);
putchar('\n');

return (0);
}
