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
 * more_numbers - print 1 to 14 ten times
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n = 0, m = 14;

	while (n < 10)
	{
		m = 1;
		while (m < 15)
		{
			_putnumber(m, 1, ' ');
			m++;
		}
		_putchar('\n');
		n++;
	}
}
