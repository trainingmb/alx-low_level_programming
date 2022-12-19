#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str : String pointer
 */
void puts_half(char *str)
{
	int siz = 0;
	int n;

	while (str[siz] != '\0')
	{
		siz++;
	}
	n = (siz - (siz % 2)) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	} 
	_putchar('\n');
}
