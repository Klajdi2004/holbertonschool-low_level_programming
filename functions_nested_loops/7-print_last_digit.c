#include "main.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @n: is the intput number as integer
 * Return: 0
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');

	return (l);
}
