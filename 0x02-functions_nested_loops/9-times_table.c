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
 * times_table - prints 9x9 times table
 * Return:	No return
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j < 10; j++)
		{
			_putnumber(i * j, 3, ' ');
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
