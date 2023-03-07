#include "main.h"
/**
 * _strlen - shows the length of a string
 * @s: int
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
