#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
		_putchar((d % 10) + '0');

	_putchar('\n');
}
