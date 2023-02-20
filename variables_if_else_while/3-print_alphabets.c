#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  generates random numbers
 * Return: 0
 */
int main(void)
{
	char letter = 'a';
	char LETTERS = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (LETTERS <= 'Z')
	{
		putchar(LETTERS);
		LETTERS++;
	}
	putchar('\n');
	return (0);
}
