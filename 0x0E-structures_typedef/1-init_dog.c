#include "dog.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * *_memset - check the code.
 *@d: is
 *@name: is
 *@age: is
 *@owner: is
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) {
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
