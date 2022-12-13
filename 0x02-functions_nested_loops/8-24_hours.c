#include "main.h"


/**
 * _putnumber - prints number provided
 * @i:		The number to print
 * @digits:	Number of digits to print
 * Return:	No return
 */
void _putnumber(int i, int digits)
{
	int ld = 1000000000;
	char flag = 0;
	int dg = 10;

	while (ld >= 1)
	{
		int mod = i % ld;
		int div = i / ld;

		if (flag || dg == digits || div > 0)
		{
			_putchar(div +'0');
			flag = 1;
		}
		i = mod;
		ld = ld / 10;
		dg--;
	}
}

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Return:	No return
 */
 void jack_bauer(void)
 {
	 int hr = 0, min = 0;
	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putnumber(hr);
			_putchar(':');
			_putnumber(min);
			_putchar('\n');
		}
	}
 }
 