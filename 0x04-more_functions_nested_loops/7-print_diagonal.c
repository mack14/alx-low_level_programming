#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @d: The number of \ characters to be printed.
 */
void print_diagonal(int d)
{
	int len, space;

	if (d > 0)
	{
		for (len = 0; len < d; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == d - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
