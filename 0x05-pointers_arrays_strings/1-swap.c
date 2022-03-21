#include "main.h"

/**
 * swap_int - function that swaps two integers
 * @a : input value 1
 * @b : input value 2
 * Return : always 0
 */

void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
