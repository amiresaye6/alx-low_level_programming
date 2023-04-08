#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: int
 * @argv: pointer of array of command line arguments
 * Return: 0 if success and 1 if not
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, l = 0, num = atoi(argv[1]);
		int coins[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (num >= coins[i])
			{
				l += num / coins[i];
				num %= coins[i];
				if (num % coins[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", l);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
