#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, s;

	for (i = 0; i < 8; i++)
	{
		for (j = 1 + i; j < 9; j++)
		{
			for (s = j + 1; s < 10; s++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(s + '0');
					if (i < 7 || j < 8 || s < 9)
					{
					putchar (44);
					putchar(' ');
					}
			}
		}
	}
	putchar('\n');

	return (0);
}
