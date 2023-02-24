#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9 without 2 & 4
 */

void print_most_numbers(void)
{
	int l;

	for (l = 0 ; l <= 9 ; l++)
	{
		if (l != 2 && l != 4)
			_putchar(l + '0');
	}
	_putchar('\n');
}
