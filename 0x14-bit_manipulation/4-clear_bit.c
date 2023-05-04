#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of bounds */
	if (index > 63)
		return (-1);
	/* Clear the bit at the given index to 0 using bitwise AND */
	*n = (~(1UL << index) & *n);
	/* Return success */
	return (1);
