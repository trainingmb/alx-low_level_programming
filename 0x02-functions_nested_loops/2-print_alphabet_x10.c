#include "main.h"

/**
 * print_alphabet_x10 - prints the whole alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char n = 'a';

	while (i < 10)
	{
		while (n <= 'z')
		{
			_putchar(n++);
		}
		i++;
		n = 'a';
		_putchar('\n');
	}
}
