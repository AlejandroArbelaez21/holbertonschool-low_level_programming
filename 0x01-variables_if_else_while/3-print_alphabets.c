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
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
putchar(ch2);
putchar('\n');

return (0);
}
