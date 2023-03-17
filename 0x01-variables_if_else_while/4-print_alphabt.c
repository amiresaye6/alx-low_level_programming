#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		char c = i;

		if (i == 113 || i == 101)
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
