#include <unistd.h>

/**
 * _putchar - writes a single character to standard output
 * @c: The character passed in to print
 * 
 * Return: Return output success
 */
int _putchar(char c)
{
	return write(1, &c,1);
}


/**
 * print_diagonal - prints dialog of length n
 * @n: the length of the line
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		i++;
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
