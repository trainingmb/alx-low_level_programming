#include <unistd.h>
/**
 * _pr - prints a string in reverse,
 * followed by a new line
 * @s: string
 */
void _pr(char *s)
{
	if (s[0] == '\0')
	{
		char c = '\n';

		write(1, &c, 1);
	}
	else
	{
		_pr(&s[1]);
		write(1, s, 1);
	}
}

/**
 * _print_rev_recursion - prints a string in reverse,
 * followed by a new line
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\n')
	{
		_pr(&s[1]);
	}
	else
	{
		_pr(s);
	}
}
