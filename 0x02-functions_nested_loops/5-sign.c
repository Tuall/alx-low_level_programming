#include <stdio.h>
#include "main.h"

/**
 * print_sign - check main
 * @n: An integer input
 * Description: put negative and positive sign
 * Return: print the sign of n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
