#include "main.h"
#include <stddef.h>
/**
 * _strstr - function
 * @haystack: -
 * @needle: -
 * Return: result
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = NULL;

	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			char *temp = haystack;
			char *n = needle;

			while (*n != '\0' && *temp == *n)
			{
				n++;
				temp++;
			}
			if (*n == '\0')
			{
				result = haystack;
				break;
			}
		}
	}
	return (result);
}
