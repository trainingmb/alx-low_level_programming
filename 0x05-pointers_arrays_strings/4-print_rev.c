#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s : String pointer
 */
void print_rev(char *s)
{
	int siz = 0;

	while (s[siz] != '\0')
	{
		siz++;
	}
	siz--;
	while (siz >= 0)
	{
		_putchar(s[siz--]);
	}
	_putchar('\n');
}
