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
 * print_times_table - prints nxn times table
 * @n: Number to which the n*n times table is printed
 * Return:	No return
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i < (n + 1); i++)
		{
			_putchar('0');
			_putchar(',');
			for (j = 1; j < (n + 1); j++)
			{
				_putnumber(i * j, 4, ' ');
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
