#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: the string to be reversed
 *Return: Void
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
