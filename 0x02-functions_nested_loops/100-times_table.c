#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int s, k, d;

	if (n >= 0 && n <= 15)
	{
		for (s = 0; s <= n; s++)
		{
			_putchar('0');

			for (k = 1; k <= n; k++)
			{
				_putchar(',');
				_putchar(' ');

				d = s * k;

				if (d <= 99)
					_putchar(' ');
				if (d <= 9)
					_putchar(' ');

				if (d >= 100)
				{
					_putchar((d / 100) + '0');
					_putchar(((d / 10)) % 10 + '0');
				}
				else if (d <= 99 && d >= 10)
				{
					_putchar((d / 10) + '0');
				}
				_putchar((d % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
