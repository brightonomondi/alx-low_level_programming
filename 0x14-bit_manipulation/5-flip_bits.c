#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	/* Get the bits that are different in n and m using XOR */
	unsigned long int exclusive = n ^ m;
	/* Iterate over each bit */
	for (i = 63; i >= 0; i--)
	{
		/* Shift the exclusive bits right to get the current bit */
		current = exclusive >> i;
		/* If the current bit is 1, increment the count */
		if (current & 1)
			count++;
	}
	/* Return the total number of different bits */
	return (count);
}
