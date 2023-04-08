#include <stdio.h>

/**
 * main - prints the number of argments in the program
 * @argc: intger
 * @argv: intger
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
