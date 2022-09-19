#include <stdio.h>
#include "main.h"

/**
 * _puts - Print a string followed by a new line
 * @str: string to be printed
 * Return: Void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
