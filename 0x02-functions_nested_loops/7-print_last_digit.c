#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number
 * @n: The number passed in
 * Return:	Returns the last digit of the number
 */
int print_last_digit(int n)
{
	long nn = n;

	if (nn >= 0)
	{
		_putchar((nn % 10) + '0');
		return ((nn % 10));
	}
	else
	{
		_putchar((-nn % 10) + '0');
		return ((-nn % 10));
	}
}
