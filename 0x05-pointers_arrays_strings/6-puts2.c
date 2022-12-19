#include "main.h"

/**
 * _puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str : String pointer
 */
void puts2(char *str)
{
	int siz = 0;

	while (str[siz] != '\0')
	{
		if ((siz % 2) == 0)
			_putchar(str[siz]);
	}
	_putchar('\n');
}
