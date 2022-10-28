#include "main.h"

/**
 * flip_bits - count the bit to change to another value
 * @n: the number
 * @m: the number to compare
 * Description: compare to ints a count the diferences in bits
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	i = 0;
	n = n ^ m;
	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}
