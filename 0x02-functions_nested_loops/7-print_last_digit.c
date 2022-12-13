#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number
 * @n: The number passed in
 * Return:	Returns the last digit of the number
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + '0');
		return ((n % 10));
	}
	else
	{
		n = n - 1;
		putchar((n % 10) + '0');
		return ((n % 10));
	}
}