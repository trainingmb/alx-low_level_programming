#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: the integer matrix
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	unsigned int i, l, r, ms;

	l = 0;
	r = 0;
	ms = size * size;

	for (i = 0; i < ms; i += size + 1)
	{
		l += a[i];
	}

	for (i = size - 1; i < ms - 1; i += size - 1)
	{
		r += a[i];
	}

	printf("%d, %d\n", l, r);
}
