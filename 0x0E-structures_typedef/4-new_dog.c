#include "dog.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog (will be copied)
 * @age: age of the dog
 * @owner: owner of the dog (will be copied)
 *
 * Return: a pointer to the new dog, or NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    /* allocate memory for the new dog */
    dog_t *new_dog;
    int name_len, owner_len, i, j;
    char *new_name, *new_owner;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    /* copy the name and owner */
    name_len = strlen(name);
    new_name = malloc(sizeof(char) * (name_len + 1));
    if (new_name == NULL) {
        free(new_dog);
        return NULL;
    }
    for (i = 0; i <= name_len; i++)
        new_name[i] = name[i];
    new_dog->name = new_name;

    owner_len = strlen(owner);
    new_owner = malloc(sizeof(char) * (owner_len + 1));
    if (new_owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
    for (j = 0; j <= owner_len; j++)
        new_owner[j] = owner[j];
    new_dog->owner = new_owner;

    /* initialize the new dog */
    new_dog->age = age;

    /* return the new dog */
    return new_dog;
}
