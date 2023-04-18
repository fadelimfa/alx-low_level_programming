#include "dog.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *print_dog - check the code.
 *@d: is
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return ();
	}
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("Age: ");
	if (d->age < 0)
		printf("(nil)\n");
	else
		printf("%f\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
