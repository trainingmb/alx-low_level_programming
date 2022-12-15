#include "main.h"

/**
 * print_line - prints line of length n
 * @n: the length of the line
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
