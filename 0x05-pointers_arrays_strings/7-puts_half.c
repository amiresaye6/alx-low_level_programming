#include "main.h"

/**
 * puts_half - a function that prings the half of a sting
 * @str: the string to print its half
 */
void puts_half(char *str)
{
	int i  = 0, j, h;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		h = i / 2;
	else
		h = (i / 2);
	for (j = h; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
