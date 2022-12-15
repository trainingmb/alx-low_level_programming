#include "main.h"


/**
 * printFizz -  Prints Fizz
 */
void printFizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}
/**
 * printBuzz -  Prints Buzz
 */
void printBuzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}

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
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 2;

	_putchar('1');
	_putchar(' ');
	while (n < 101)
	{
		_putchar(' ');
		switch (((n % 3) == 0) + (2 * ((n % 5) == 0)))
		{
			case 0:
				_putnumber(n, 1, ' ');
				break;
			case 1:
				printFizz();
				break;
			case 2:
				printBuzz();
				break;
			case 3:
				printFizz();
				printBuzz();
				break;
			default:
				break;
		}
		n++;
	}
	_putchar('\n');
	return (0);
}
