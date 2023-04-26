#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory, or NULL if an error occurred
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: the constant byte to fill with
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
