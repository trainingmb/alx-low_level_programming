#include "main.h"

/**
 * print_triangle - prints square of length n
 * @size: the length of the line
 */
void print_triangle(int size)
{
	int i = 0, j = 0;

	while (i < size)
	{
		j = (size - i - 1);
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		j = i + 1;
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		i++;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
