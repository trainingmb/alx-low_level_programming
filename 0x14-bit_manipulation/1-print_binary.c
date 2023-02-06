
#include "main.h"

/**
 * print_binary: print the binary number equivalent of n
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	char pr;

	pr = 0;
	i = 1 << 30;
	while (i)
	{
		if (pr == 0)
		{
			if ((n & i))
			{
				pr = 1;
				_putchar('1');
			}
			i = i >> 1;
		}
		else
		{
			if ((n & i))
				_putchar('1');
			else
				_putchar('0');
			i = i >> 1;
		}
	}
	if (pr == 0)
	{
		_putchar('0');
	}
}
