#include "main.h"

/**
 * _puts - Returns the length of a string.
 * @str : String pointer
 */
void _puts(char *str)
{
	int siz = 0;

	while (str[siz] != '\0')
	{
		_putchar(str[siz++]);
	}
	_putchar('\n');
}
