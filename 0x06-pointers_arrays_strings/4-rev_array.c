#include "main.h"

/**
 * reverse_array - Reverse array
 * @a : Integer array
 * @n : Number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int temp = 0, i = 0, j = n - 1;

	for (i = 0, j = n - 1; i < (n / 2); i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
