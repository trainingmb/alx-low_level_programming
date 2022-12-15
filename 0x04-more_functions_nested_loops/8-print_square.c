#include "main.h"

/**
 * print_square - prints square of length n
 * @size: the length of the line
 */
void print_square(int size)
{
	int i = 0, j = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		i++;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
