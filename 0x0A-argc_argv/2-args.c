#include <stdio.h>

/**
 * main - prints all the argments in the program
 * @argc: intger
 * @argv: intger
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int i;

	(void)argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
