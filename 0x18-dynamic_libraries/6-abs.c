#include <stdio.h>
#include "main.h"
/**
 * _abs - check main
 * @n: An integer input
 * Description: Prints out the absolute value of an integer
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
