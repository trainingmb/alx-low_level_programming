#include "main.h"


/**
 * printnumber - print vector a
 * @a: int vector of length 30
 * Return: No return
 */
void printnumber(int a[])
{
	int i = 0, flag = 0;

	for( i = 29; i >= 0; i--)
	{
		if (flag || a[i] > 0)
		{
			_putchar(a[i] + '0');
			flag = 1;
		}
	}
}
/**
 * copy - copy vector b to vector a
 * @a: int vector of length 30
 * @b: int vector of length 30
 * Return: No return
 */
void copy(int a[], int b[])
{
	int i = 0;

	for( i = 0; i < 30; i++)
	{
		a[i] = b[i];
	}
}
/**
 * add - add vector b to vector a
 * @a: int vector of length 30
 * @b: int vector of length 30
 * Return: No return
 */
void add(int a[], int b[])
{
	int i = 0, carry = 0, temp = 0;

	for( i = 0; i < 30; i++)
	{
		temp = (a[i] + b[i] + carry) % 10;
		carry = (a[i] + b[i] + carry) / 10;
		a[i] = temp;
	}
}
/**
 * main -  prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int n[30] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int m[30] = {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int temp[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int c = 0;

	printnumber(n);
	while (c < 97)
	{
		_putchar(',');
		_putchar(' ');
		printnumber(m);
		c++;
		copy(temp,m);
		add(m,n);
		copy(n,temp);
	}
	_putchar('\n');
	return (0);			
}
