#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;
	/* Check if the index is out of bounds */
	if (index > 63)
		return (-1);
	/*Shift right by index and bitwise AND with 1 to isolate the bit*/
	bit_val = (n >> index) & 1;
	/* Return the bit value */
	return (bit_val);
}
