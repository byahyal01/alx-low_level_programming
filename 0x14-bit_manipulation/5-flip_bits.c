#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bit flips required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, num_flips = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			num_flips++;
		n >>= 1;
		m >>= 1;
	}

	return (num_flips);
}

