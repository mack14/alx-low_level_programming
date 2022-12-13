#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int d, f = 0;

	for (d = 0; d < 1024; d++)
	{
		if ((d % 3) == 0 || (d % 5) == 0)
			f += i;
	}

	printf("%d\n", f);

	return (0);
}
