#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @d: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int d)
{
	if (d >= 'A' && d <= 'Z')
		return (1);

	else
		return (0);
}
