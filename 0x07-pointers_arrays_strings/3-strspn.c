#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: The character to print
 * @accept: Charcter
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
