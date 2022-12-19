#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s : String pointer
 */
void print_rev(char *s)
{
	int siz = 0;

	while (str[siz] != '\0')
	{
		_putchar(str[siz++]);
	}
	_putchar('\n');
}
