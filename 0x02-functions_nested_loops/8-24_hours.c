#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * jack_bauer - check main
 * Description: print every minute of the day
 * Return: Nothing
 */

void jack_bauer(void)
{
	int H, M;
	for (H = 0; H <= 23; H++)
	{
		for (M = 0; M <= 59; M++)
		{
			_putchar((H / 10) + 0);
			_putchar((H % 10) + '0');

