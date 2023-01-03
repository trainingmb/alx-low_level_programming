#include "main.h"

/**
 * print_chessboard - locates the first occurrence in
 * the string s of any of the bytes in the string
 * @a: the chessboard
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (NULL);
}
