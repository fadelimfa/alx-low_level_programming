#include "dog.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *free_dog - check the code.
 *@d: is
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d);
	}
}
