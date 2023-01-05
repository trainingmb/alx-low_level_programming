#include <unistd.h>
/**
 * _print_rev_recursion - prints a string in reverse,
 * followed by a new line
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		;
	}
	else
	{
		_print_rev_recursion(&s[1]);
		write(1, s, 1);
	}
}
