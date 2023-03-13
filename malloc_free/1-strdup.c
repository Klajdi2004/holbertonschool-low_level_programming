#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - function that duplicates array
 * @str: char
 * Return: dup
 */

char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		len = i;
	dup = malloc((len + 2) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
