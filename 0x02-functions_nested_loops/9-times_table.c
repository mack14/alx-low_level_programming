#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int n, z, k;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (z = 1; z <= 9; z++)
		{
			_putchar(',');
			_putchar(' ');

			k = n * z;

			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
