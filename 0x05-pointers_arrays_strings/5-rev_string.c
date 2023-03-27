#include "main.h"

/**
 * rev_string - revereses a string
 * @s: the string
 */
void rev_string(char *s)
{
	int j, i = 0;
	char a, b;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++)
	{
		a = s[j];
		b = s[i];
		s[j] = b;
		s[i] = a;
		i--;
	}

}
