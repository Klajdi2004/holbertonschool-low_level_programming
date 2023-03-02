#include "main.h"

/**
 * cap_string - function
 * @s: s
 * Return: succesful
 */
char *cap_string(char *s)
{
	int i, j;

	char symbol[] = ",;.!?\"(){}\n \t";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0 ; symbol[j] != '\0'; j++)
		{
			if (s[i] == symbol[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);

}
