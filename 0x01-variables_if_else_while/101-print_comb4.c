#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d = 012, a = 012, i = 012;

while (d < 790)
{
a = 012;
while (a < 790)
{
i = 012;
while (i < 790)
{
if (d != a && a != i && d != i && d < a && a < i)
{
putchar(d);
putchar(a);
putchar(i);
if (!(d == 012 && a == 013 && i == 014))
{
						putchar(',');
						putchar(' ');
}
}
i++;
}
a++;
}
d++;
}
putchar('\n');

return (0);
}
