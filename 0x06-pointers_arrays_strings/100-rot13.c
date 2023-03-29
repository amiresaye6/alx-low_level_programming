#include "main.h"
/**
 * rot13 - converts string to root 13
 * @s: the string
 * Return: ptr
 */
char *rot13(char *s)
{
	int i;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY"
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYABCDEFGHIJKLM"

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);

}
