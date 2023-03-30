#include "main.h"
/**
 * swap_int - swaps the value of a and b
 * @a: an integer to swap with b
 * @b: an integer to swap with a
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
