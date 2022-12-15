#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @d: The number of _ characters to be printed.
 */
void print_line(int d)
{
	int len;

	if (d > 0)
	{
		for (len = 0; len < d; len++)
			_putchar('_');
	}

	_putchar('\n');
}
