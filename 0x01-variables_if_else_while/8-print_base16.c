#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d = 0;
char c = 'a';

while (d < 10)
{
putchar((d % 10) + '0');
d++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');

return (0);
}
