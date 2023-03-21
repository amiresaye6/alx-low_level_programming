#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int c;
	unsigned long f1 = 0, f2 = 1, sum;

	for (c = 0; c < 50; c++)
	{
		sum = f1 + f2;
		printf("%lu", sum);
		f1 = f2;
		f2 = sum;
		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
