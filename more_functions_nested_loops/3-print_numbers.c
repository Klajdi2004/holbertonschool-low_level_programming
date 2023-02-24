#include "main.h"

/**
 * print_numbers -> print numbers
 */

void print_numbers(void)
{
	char x;

	for (x = 0; x <= 10; x++)
	{
		_putchar('\n');
		_putchar(x + '0');
	}
}
