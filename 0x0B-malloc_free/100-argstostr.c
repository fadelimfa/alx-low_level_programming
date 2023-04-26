#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * *argstostr - is
 * @ac: is
 * @av: i
 * Return: 0 on success, 1 on failure
 */
char *argstostr(int ac, char **av)
{
	char *concat_str;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculate length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
		len++;
	len++; /* for the newline character */
	}

	concat_str = malloc((len + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	/* concatenate the strings */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concat_str[k] = av[i][j];
			k++;
		}
		concat_str[k] = '\n';
		k++;
	}
	concat_str[k] = '\0';

	return (concat_str);
}
