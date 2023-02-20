#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  generates random numbers
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
