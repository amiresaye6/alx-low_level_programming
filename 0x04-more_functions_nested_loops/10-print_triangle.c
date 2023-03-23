#include "main.h"

/**
 *print_triangle - prints a triangle ha ha ha
 *
 * @size: the size hah hah ah
 * Return: 0 success.
 */
void print_triangle(int size)
{
        int i, j, k;

        for (i = 0; i < size; i++)
        {
                for (j = 0; j < size - i - 1; j++)
                {
                        _putchar(' ');
                }
                for (k = 0; k < i + 1; k++)
                {
                        _putchar(35);
                }
                if (i == size - 1)
                        continue;
                _putchar('\n');
        }
        _putchar('\n');
}
