#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check main
 *
 * Description: prints 10 times the numbers from 0 to 14,
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
