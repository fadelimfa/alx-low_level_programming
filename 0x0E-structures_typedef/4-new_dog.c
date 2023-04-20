#include "dog.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *print_dog - check the code.
 *@d: is
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;

    /* allocate memory for the dog */
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    /* allocate memory for the name and owner strings */
    dog->name = malloc(strlen(name) + 1);
    if (dog->name == NULL) {
        free(dog);
        return (NULL);
    }
    dog->owner = malloc(strlen(owner) + 1);
    if (dog->owner == NULL) {
        free(dog->name);
        free(dog);
        return (NULL);
    }

    /* copy the name and owner strings */
    strcpy(dog->name, name);
    strcpy(dog->owner, owner);

    /* set the age */
    dog->age = age;

    return (dog);
}
