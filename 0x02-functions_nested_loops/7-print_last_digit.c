#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @z: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int z)
{
	int last = z % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
