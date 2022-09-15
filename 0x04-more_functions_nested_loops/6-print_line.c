#include "main.h"
#include <stdio.h>

/**
 * print_line - check main
 * @n: an integer output
 * Description: draw a straight line
 * Return : void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
