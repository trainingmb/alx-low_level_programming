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
	long ld = 1000000000000000000;
	char flag = 0;
	int dg = 19;

	while (ld >= 1)
	{
		long long mod = i % ld;
		long long div = i / ld;

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
 * main -  finds and prints the sum of the even-valued terms
 *
 * Return: Always 0.
 */
int main(void)
{
	long n = 1, m = 2, c = 0, temp = 0, sum = 0;

	while (m <= 4000000)
	{
		if ((m % 2) == 0)
		{
			sum += m;
		}
		c++;
		temp = m;
		m += n;
		n = temp;
	}
	_putnumber(sum, 1,' ');
	_putchar('\n');
	return (0);
}
