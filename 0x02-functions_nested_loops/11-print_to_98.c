#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a \n
 * @n:	Integer to start printing at
 * Return:	No return
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			_putnumber(n--, 1, '');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		while (n < 98)
		{
			_putnumber(n++, 1, '');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putnumber(98, 1, '');
	_putchar('\n');
}
