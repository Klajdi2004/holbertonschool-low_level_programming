#include "main.h"
#include <stdio.h>

/**
 * print_numbers -> print numbers
 */

void print_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
		putchar(c);
	putchar('\n');
}
