#include "main.h"

/**
 * _putnumber - prints number provided
 * @i:		The number to print
 * Return:	No return
 */
void print_number(int n)
{
	int ld = 1000000000;
	char flag = 0;
	int dg = 10;
	int digits = 1;
	char filler = ' ';

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (ld >= 1)
	{
		int mod = n % ld;
		int div = n / ld;

		if (flag || div > 0 || dg == 1)
		{
			_putchar(div + '0');
			flag = 1;
		}
		else if (dg <= digits)
		{
			_putchar(filler);
		}
		n = mod;
		ld = ld / 10;
		dg--;
	}
}
