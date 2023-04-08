#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of multbliging two numbers
 * @argc: intger
 * @argv: intger
 * Return: result if success and Error if not
 */
int main(int argc, char const *argv[])
{
	int res = 1, i;

	(void)argc;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
		return (0);
	}
}
