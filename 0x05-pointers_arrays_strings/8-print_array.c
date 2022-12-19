#include "main.h"

/**
 * print_number - prints number provided
 * @n:		The number to print
 * Return:	No return
 */
void print_number(int n)
{
	int ld = 1;
	char flag = 0;
	int dg = 10, i = 0;

	while (i < 9)
	{
		ld = ld * 10;
		i++;
	}

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
		n = mod;
		ld = ld / 10;
		dg--;
	}
}

/**
 * print_array - prints n elements of an array of integers then a new line
 * @a:		The integer array pointer
 * @n:		The number of elements of the array to be printed
 * Return:	No return
 */
void print_array(int *a, int n)
{
	int siz = 0;

	while (siz < n)
	{
		print_number(a[siz]);

		if (siz < (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
		siz++;
	}
	_putchar('\n');
}
