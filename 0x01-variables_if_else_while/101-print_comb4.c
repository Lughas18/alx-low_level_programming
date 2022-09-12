#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d = 480, a = 480, i = 480;

while (d < 580)
{
a = 480;
while (a < 580)
{
i = 480;
while (i < 580)
{
if (d != a && a != i && d != i && d < a && a < i)
{
putchar(d);
putchar(a);
putchar(i);
if (!(d == 550 && a == 560 && i == 570))
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
