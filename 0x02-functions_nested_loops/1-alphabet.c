#include "main.h"

/**
 * print_alphabet - prints the whole alphabet in lowercase
 * 
 * 
 */
void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		_putchar(n++);
	}
	_putchar('\n');
}
