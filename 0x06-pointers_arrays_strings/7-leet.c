#include "main.h"
#include <stdio.h>
/**
* *leet - a function that encodes a string into 1337
* @str: string
* Return: string
**/
char *leet(char *str)
{
	char *cp = c;
	char keyy[] = {'A', 'E', 'O', 'T', 'L'}
	int val[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(keyy) / sixeof(char); i++)
			if (*char == keyy[i] || *c == keyy[i] + 32)
				*c = 48 + val[i];
		c++;
	}
	return (cp);

}
