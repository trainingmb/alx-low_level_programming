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
 * main - computes and prints the sum of all the 
 *			multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 3, sum = 0;

	while (n < 1024)
	{
		if((n % 3) == 0 || (n % 5) == 0)
		{
			sum = n + sum;
		}
		n++;
	}
	_putnumber(sum, 1, ' ');
	_putchar('\n');
    return (0);
}