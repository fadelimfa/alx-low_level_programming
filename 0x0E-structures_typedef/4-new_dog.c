#include "dog.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
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
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    /* copy the name and owner */
    int name_len = _strlen(name);
    new_dog->name = malloc(sizeof(char) * (name_len + 1));
    if (new_dog->name == NULL) {
        free(new_dog);
        return NULL;
    }
    for (int i = 0; i <= name_len; i++)
        new_dog->name[i] = name[i];

    int owner_len = _strlen(owner);
    new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
    if (new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
    for (int i = 0; i <= owner_len; i++)
        new_dog->owner[i] = owner[i];

    /* initialize the new dog */
    new_dog->age = age;

    /* return the new dog */
    return new_dog;
}

/* helper function */

/**
 * _strlen - computes the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}
