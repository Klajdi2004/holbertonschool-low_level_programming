#include "main.h"

/**
 * more_numbers - prits 0 to 14, 10 times
 */

void more_numbers(void)
{
	int l, o;

	for (l = 0; l < 10; l++)
	{
		for (o = 0; o < 15; o++)
		{
			if (o >= 10)
				_putchar((o / 10) + '0');
			_putchar((o % 10) + '0');
		}
		_putchar('\n');
	}
}
