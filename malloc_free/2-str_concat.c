#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concentrates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: both strings
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	arr = malloc(sizeof(char) * (i + j + 1));
	if (arr == NULL)
		return (NULL);
	i = j = 0;

	while (s1[i] != '\0')
	{
		arr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		arr[i] = s2[j];
		i++, j++;
	}
	arr[i] = '\0';
	return (arr);
}
