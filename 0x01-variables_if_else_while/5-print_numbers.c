#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 10;

	while (a < 20)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
