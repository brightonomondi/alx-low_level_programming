The `_memset()` function takes a pointer to a memory area, a byte to fill the memory area with, and the number of bytes to be filled. It then fills the memory area with the given byte and returns a pointer to the memory area.

The `ffree()` function frees a string of strings. It takes a pointer to a string of strings, iterates through the string until it reaches the end (i.e., a null character), and frees each string. Finally, it frees the pointer to the string of strings.

The `_realloc()` function reallocates a block of memory. It takes a pointer to the previous malloc'ated block, the byte size of the previous block, and the byte size of the new block. If the previous pointer is null, it returns a pointer to a new block of memory with the specified size. If the new size is zero, it frees the previous pointer and returns null. If the new size is equal to the old size, it returns the previous pointer. Otherwise, it allocates a new block of memory with the specified size, copies the old block to the new block, frees the old block, and returns a pointer to the new block.
#include "shell.h"

/**
 **_memset - fills memory with a constant byte
 *@s: the pointer to the memory area
 *@b: the byte to fill *s with
 *@n: the amount of bytes to be filled
 *Return: (s) a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - frees a string of strings
 * @pp: string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to previous malloc'ated block
 * @old_size: byte size of previous block
 * @new_size: byte size of new block
 *
 * Return: pointer to da ol'block nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
