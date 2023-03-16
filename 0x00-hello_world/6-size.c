#include <stdio.h>

/**
 * main - size.c
 *
 * Return: 0
 */

int mai(void)

{
	printf("Size of a char: %lu byte(s)", sizeof(char));
        printf("Size of int: %lu byte(s)", sizeof (int));
        printf("Size of a long int: %lu byte(S)", sizeof(long  int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float : %lu byte(s)", sizeof(float));
	return (0);
}	
