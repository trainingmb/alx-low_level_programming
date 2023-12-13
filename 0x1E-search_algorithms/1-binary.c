#include "search_algos.h"

/**
 * print_array - Search an ordered list in binary
 * @array: Pointer to the array to be printed
 * @size: The size of the array
 * Return: Void
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	for (; i < size; i++)
	{
		printf("%d%s", array[i], i != (size - 1) ? ", " : "\n");
	}
}


/**
 * binary_search - Search an ordered list in binary
 * @array: Pointer to the array to be searched
 * @size: The size of the array to be searched
 * @value: The value for which the array is searching
 * Return: The index where the value was found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t m = (size - 1) / 2;
	int result = 0;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	print_array(array, size);
	if (array[m] < value)
	{
		result = (binary_search(&(array[m + 1]), size - m - 1, value));
		if (result == -1)
			return (-1);
		return (m + 1 + result);
	}
	if (array[m] > value)
		return (binary_search(array, m, value));
	if (array[m] == value)
		return (m);
	return (-1);
}
