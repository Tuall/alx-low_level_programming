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
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}