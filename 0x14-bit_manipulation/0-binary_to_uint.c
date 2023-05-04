#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A string containing the binary number.
 *
 * Return: The decimal value of the binary number, or 0 if:
 *         - b is NULL.
 *         - b contains characters other than '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		decimal_value = (decimal_value * 2) + (b[i] - '0');
	}

	return (decimal_value);
}
