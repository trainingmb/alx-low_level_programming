#include "main.h"

/**
 * print_numbers - prints the 0 to 9
 */
void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n++);
	}
	_putchar('\n');
}
