#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @c: The second integer to be swapped.
 */
void swap_int(int *a, int *c)
{
	int tmp = *a;
	*a = *c;
	*c = tmp;
}
