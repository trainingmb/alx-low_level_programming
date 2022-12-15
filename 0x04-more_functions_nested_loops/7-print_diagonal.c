#include "main.h"

/**
 * print_diagonal - prints dialog of length n
 * @n: the length of the line
 */
void print_diagonal(int n)
{
	int l = n, i = 0, j = 0;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		i++;
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
