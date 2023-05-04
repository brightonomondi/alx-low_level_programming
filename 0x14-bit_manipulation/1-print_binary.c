#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;
	/* Loop through each bit of the number */
	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		/* If the current bit is a 1, print it and increment the count */
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	/* If the number is 0, print a single 0 */
	if (!count)
		_putchar('0');
}
