#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: an int to swap
 * @b: an int to swap
 */

void swap_int(int *a, int *b)
{
	int hello = *a;

	*a = *b;
	*b = hello;
}
