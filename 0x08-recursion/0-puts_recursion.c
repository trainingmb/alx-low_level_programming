#include <unistd.h>
/**
 * _puts_recursion - prints a string,
 * followed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		char c = '\n';

		write(1, &c, 1);
	}
	else
	{
		write(1, s, 1);
		_puts_recursion(&s[1]);
	}
}
