#include "main.h"

/**
 * print_diagonal -> printing line
 * @n: integer params
 */
void print_diagonal(int n)
{
	int l, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < n; l++)
		{
			for (i = 0; i < l; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
