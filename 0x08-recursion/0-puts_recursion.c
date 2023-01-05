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
		write(1, '\n', 1);
	}
	else
	{
		write(1, s[0], 1);
		_puts_recursion(&s[1]);
	}
}
