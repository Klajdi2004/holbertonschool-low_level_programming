#include "main.h"
/**
 * jack_bauer - just a function
 * Return: 0 succesful
 */
void jack_bauer(void)
{
	int hour1, hour2, min1, min2;

	for (hour1 = '0' ;hour1 <= '2'; hour1++)
	{
		for (hour2 = '0' ; hour2 <= '9'; hour2++)
		{
			for (min1 = '0' ; min1 <= '5'; min1++)
			{
				for (min2 = '0' ; min2 <= '9'; min2++)
				{
					if(hour1 == '2' && hour2 == '4')
						return;

					_putchar(hour1);
					_putchar(hour2);
					_putchar(':');
					_putchar(min1);
					_putchar(min2);
					_putchar('\n');
				}
			}
		}
	}
}
			
