#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(i + '0');
			putchar(j + 1 + '0');
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
