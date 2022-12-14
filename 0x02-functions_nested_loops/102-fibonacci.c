#include "main.h"


/**
 * _putnumber - prints number provided
 * @i:		The number to print
 * @digits:	Number of digits to print
 * @filler:	The filler character before the number
 * Return:	No return
 */
void _putnumber(long i, int digits, char filler)
{
	long ld = 10000000000;
	char flag = 0;
	int dg = 11;

	while (ld >= 1)
	{
		long mod = i % ld;
		long div = i / ld;

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
 * main -  prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long n = 1, m = 2, c = 0, temp = 0;

	_putnumber(n, 1, ' ');
	while (c < 49)
	{
		_putchar(',');
		_putchar(' ');
		_putnumber(m, 1, ' ');
		c++;
		temp = m;
		m += n;
		n = temp;
	}
	_putchar('\n');
	return (0);
}
