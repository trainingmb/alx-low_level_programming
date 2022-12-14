#include "main.h"


/**
 * _putnumber - prints number provided
 * @i:		The number to print
 * @digits:	Number of digits to print
 * @filler:	The filler character before the number
 * Return:	No return
 */
void _putnumber(int i, int digits, char filler)
{
	int ld = 1000000000;
	char flag = 0;
	int dg = 10;

	while (ld >= 1)
	{
		int mod = i % ld;
		int div = i / ld;

		if (flag || div > 0 || dg == 1)
		{
			_putchar(div + '0');
			flag = 1;
		}
		else if (dg <= digits)
		{
			_putchar(filler);
		}
		i = mod;
		ld = ld / 10;
		dg--;
	}
}

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
			_putnumber(n--, 1, ' ');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		while (n < 98)
		{
			_putnumber(n++, 1, ' ');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putnumber(98, 1, '');
	_putchar('\n');
}
