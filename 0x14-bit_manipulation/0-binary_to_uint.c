#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;
	/* Check if input string is NULL */
	if (!b)
		return (0);
	/* Loop through input string */
	for (i = 0; b[i]; i++)
	{
		/* Check if each character is a valid binary digit */
		if (b[i] < '0' || b[i] > '1')
			return (0);
		/* Update the decimal value based on the current binary digit */
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	/* Return the final decimal value */
	return (dec_val);
}
